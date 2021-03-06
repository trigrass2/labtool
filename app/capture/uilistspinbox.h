/*
 *  Copyright 2013 Embedded Artists AB
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */
#ifndef UILISTSPINBOX_H
#define UILISTSPINBOX_H

#include <QWidget>
#include <QSpinBox>
#include <QList>

class UiListSpinBox : public QSpinBox
{
    Q_OBJECT
public:
    explicit UiListSpinBox(QWidget *parent = 0);
    void setValue(double val);
    void setSupportedValues(QList<double> &list);

signals:
    void valueChanged(double d);

public slots:


protected:
    QString textFromValue(int value) const;
    int valueFromText(const QString &text) const;
    QValidator::State validate(QString &text, int &pos) const;

private slots:
    void handleValueChanged(int i);

private:
    QList<double> mValues;
    
};

#endif // UILISTSPINBOX_H
