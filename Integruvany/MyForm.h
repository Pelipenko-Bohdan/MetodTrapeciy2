#pragma once

namespace Zavdanny_3 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Сводка для MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::TextBox^ textBox1;
        System::Windows::Forms::TextBox^ textBox2;
        System::Windows::Forms::TextBox^ textBox3;
        System::Windows::Forms::TextBox^ textBox4;
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;

        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(39, 66);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(156, 13);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Введіть межу інтегрування A:";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(39, 124);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(156, 13);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Введіть межу інтегрування B:";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(39, 182);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(175, 13);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Введіть кількість підінтервалів N:";
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(42, 91);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(153, 20);
            this->textBox1->TabIndex = 3;
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(42, 150);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(153, 20);
            this->textBox2->TabIndex = 4;
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(42, 208);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(153, 20);
            this->textBox3->TabIndex = 5;
            // 
            // textBox4
            // 
            this->textBox4->Location = System::Drawing::Point(42, 282);
            this->textBox4->Multiline = true;
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(153, 40);
            this->textBox4->TabIndex = 7;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(39, 254);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(65, 13);
            this->label4->TabIndex = 8;
            this->label4->Text = L"Результат :";
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(242, 124);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(145, 31);
            this->button1->TabIndex = 9;
            this->button1->Text = L"Розв\'язати";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(242, 182);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(145, 31);
            this->button2->TabIndex = 10;
            this->button2->Text = L"Очистити";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(39, 28);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(148, 13);
            this->label5->TabIndex = 11;
            this->label5->Text = L"Виконав Пелипенко Богдан";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(239, 28);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(124, 13);
            this->label6->TabIndex = 12;
            this->label6->Text = L"f(x)=2^(x-1) sin(x+3e^(-x))";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(423, 341);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        double Function(double x)
        {
            // Приклад функції для інтегрування
            return Math::Pow(2, x - 1) * Math::Sin(x + 3 * Math::Exp(-x));
        }

        double TrapezoidalRule(double a, double b, int n)
        {
            double h = (b - a) / n;
            double sum = 0.5 * (Function(a) + Function(b));

            for (int i = 1; i < n; i++)
            {
                sum += Function(a + i * h);
            }

            return sum * h;
        }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
    {
        try
        {
            double a = Convert::ToDouble(textBox1->Text);
            double b = Convert::ToDouble(textBox2->Text);
            int n = Convert::ToInt32(textBox3->Text);

            // Розрахунок методу трапецій
            double result = TrapezoidalRule(a, b, n);
            textBox4->Text = Convert::ToString(result);
        }
        catch (Exception^ ex)
        {
            MessageBox::Show("Помилка: " + ex->Message);
        }
    }

    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
    {
        textBox1->Clear();
        textBox2->Clear();
        textBox3->Clear();
        textBox4->Clear();
    }
    };
}