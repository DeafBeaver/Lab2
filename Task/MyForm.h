#pragma once
#define _USE_MATH_DEFINES
#include <cmath>

namespace Task {

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
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^ expression;
	protected:

	private: System::Windows::Forms::TabPage^ task;
	protected:


	private: System::Windows::Forms::TextBox^ input_induct;
	private: System::Windows::Forms::TextBox^ input_capacitor;
	private: System::Windows::Forms::Label^ Label_period;
	private: System::Windows::Forms::Label^ label_period_input;
	private: System::Windows::Forms::Label^ label_capacitor_input;
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Button^ button_clear;
	private: System::Windows::Forms::Button^ button_calculate;














	private: System::Windows::Forms::TabControl^ tabControl1;

	private: System::Windows::Forms::TextBox^ input_n;
	private: System::Windows::Forms::TextBox^ input_y;
	private: System::Windows::Forms::Label^ label_result_Z;

	private: System::Windows::Forms::Label^ label_n;
	private: System::Windows::Forms::Label^ label_y;
	private: System::Windows::Forms::Button^ button_clear_expression;

	private: System::Windows::Forms::Button^ button_calculate_expression;
	private: System::Windows::Forms::Label^ label_frequency;











	private: System::Windows::Forms::Button^ button_exit_expression;
	private: System::Windows::Forms::Label^ label_result;
	private: System::Windows::Forms::Label^ label_frequency_result;


	private: System::Windows::Forms::Label^ label_period_result;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::TabPage^ change_form;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button_changeOpacity;



	private: System::Windows::Forms::Button^ button_resize;

	private: System::Windows::Forms::Button^ button_borderChange;



















	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->expression = (gcnew System::Windows::Forms::TabPage());
			this->label_result = (gcnew System::Windows::Forms::Label());
			this->input_n = (gcnew System::Windows::Forms::TextBox());
			this->input_y = (gcnew System::Windows::Forms::TextBox());
			this->label_result_Z = (gcnew System::Windows::Forms::Label());
			this->label_n = (gcnew System::Windows::Forms::Label());
			this->label_y = (gcnew System::Windows::Forms::Label());
			this->button_exit_expression = (gcnew System::Windows::Forms::Button());
			this->button_clear_expression = (gcnew System::Windows::Forms::Button());
			this->button_calculate_expression = (gcnew System::Windows::Forms::Button());
			this->task = (gcnew System::Windows::Forms::TabPage());
			this->label_frequency_result = (gcnew System::Windows::Forms::Label());
			this->label_period_result = (gcnew System::Windows::Forms::Label());
			this->label_frequency = (gcnew System::Windows::Forms::Label());
			this->input_induct = (gcnew System::Windows::Forms::TextBox());
			this->input_capacitor = (gcnew System::Windows::Forms::TextBox());
			this->Label_period = (gcnew System::Windows::Forms::Label());
			this->label_period_input = (gcnew System::Windows::Forms::Label());
			this->label_capacitor_input = (gcnew System::Windows::Forms::Label());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->button_calculate = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->change_form = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button_changeOpacity = (gcnew System::Windows::Forms::Button());
			this->button_resize = (gcnew System::Windows::Forms::Button());
			this->button_borderChange = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->expression->SuspendLayout();
			this->task->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->change_form->SuspendLayout();
			this->SuspendLayout();
			// 
			// expression
			// 
			this->expression->Controls->Add(this->label_result);
			this->expression->Controls->Add(this->input_n);
			this->expression->Controls->Add(this->input_y);
			this->expression->Controls->Add(this->label_result_Z);
			this->expression->Controls->Add(this->label_n);
			this->expression->Controls->Add(this->label_y);
			this->expression->Controls->Add(this->button_exit_expression);
			this->expression->Controls->Add(this->button_clear_expression);
			this->expression->Controls->Add(this->button_calculate_expression);
			this->expression->Location = System::Drawing::Point(4, 25);
			this->expression->Name = L"expression";
			this->expression->Padding = System::Windows::Forms::Padding(3);
			this->expression->Size = System::Drawing::Size(274, 224);
			this->expression->TabIndex = 1;
			this->expression->Text = L"Арифм. Вираз";
			this->expression->UseVisualStyleBackColor = true;
			// 
			// label_result
			// 
			this->label_result->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label_result->AutoSize = true;
			this->label_result->Location = System::Drawing::Point(163, 91);
			this->label_result->Name = L"label_result";
			this->label_result->Size = System::Drawing::Size(0, 16);
			this->label_result->TabIndex = 19;
			// 
			// input_n
			// 
			this->input_n->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->input_n->Location = System::Drawing::Point(166, 48);
			this->input_n->Name = L"input_n";
			this->input_n->Size = System::Drawing::Size(100, 22);
			this->input_n->TabIndex = 16;
			// 
			// input_y
			// 
			this->input_y->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->input_y->Location = System::Drawing::Point(166, 8);
			this->input_y->Name = L"input_y";
			this->input_y->Size = System::Drawing::Size(100, 22);
			this->input_y->TabIndex = 15;
			// 
			// label_result_Z
			// 
			this->label_result_Z->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label_result_Z->AutoSize = true;
			this->label_result_Z->Location = System::Drawing::Point(62, 91);
			this->label_result_Z->Name = L"label_result_Z";
			this->label_result_Z->Size = System::Drawing::Size(88, 16);
			this->label_result_Z->TabIndex = 14;
			this->label_result_Z->Text = L"Результат Z";
			// 
			// label_n
			// 
			this->label_n->AutoSize = true;
			this->label_n->Location = System::Drawing::Point(9, 54);
			this->label_n->Name = L"label_n";
			this->label_n->Size = System::Drawing::Size(141, 16);
			this->label_n->TabIndex = 13;
			this->label_n->Text = L"Введіть коефіцієнт n";
			// 
			// label_y
			// 
			this->label_y->AutoSize = true;
			this->label_y->Location = System::Drawing::Point(9, 14);
			this->label_y->Name = L"label_y";
			this->label_y->Size = System::Drawing::Size(141, 16);
			this->label_y->TabIndex = 12;
			this->label_y->Text = L"Введіть коефіцієнт y";
			// 
			// button_exit_expression
			// 
			this->button_exit_expression->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_exit_expression->Location = System::Drawing::Point(166, 186);
			this->button_exit_expression->Name = L"button_exit_expression";
			this->button_exit_expression->Size = System::Drawing::Size(100, 30);
			this->button_exit_expression->TabIndex = 18;
			this->button_exit_expression->Text = L"Вийти";
			this->button_exit_expression->UseVisualStyleBackColor = true;
			this->button_exit_expression->Click += gcnew System::EventHandler(this, &MyForm::button_exit_expression_Click);
			// 
			// button_clear_expression
			// 
			this->button_clear_expression->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button_clear_expression->Location = System::Drawing::Point(12, 187);
			this->button_clear_expression->Name = L"button_clear_expression";
			this->button_clear_expression->Size = System::Drawing::Size(100, 30);
			this->button_clear_expression->TabIndex = 10;
			this->button_clear_expression->Text = L"Очистити";
			this->button_clear_expression->UseVisualStyleBackColor = true;
			this->button_clear_expression->Click += gcnew System::EventHandler(this, &MyForm::button_clear_expression_Click);
			// 
			// button_calculate_expression
			// 
			this->button_calculate_expression->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button_calculate_expression->Location = System::Drawing::Point(86, 140);
			this->button_calculate_expression->Name = L"button_calculate_expression";
			this->button_calculate_expression->Size = System::Drawing::Size(102, 30);
			this->button_calculate_expression->TabIndex = 9;
			this->button_calculate_expression->Text = L"Обчислити";
			this->button_calculate_expression->UseVisualStyleBackColor = true;
			this->button_calculate_expression->Click += gcnew System::EventHandler(this, &MyForm::button_calculate_expression_Click);
			// 
			// task
			// 
			this->task->Controls->Add(this->label_frequency_result);
			this->task->Controls->Add(this->label_period_result);
			this->task->Controls->Add(this->label_frequency);
			this->task->Controls->Add(this->input_induct);
			this->task->Controls->Add(this->input_capacitor);
			this->task->Controls->Add(this->Label_period);
			this->task->Controls->Add(this->label_period_input);
			this->task->Controls->Add(this->label_capacitor_input);
			this->task->Controls->Add(this->button_exit);
			this->task->Controls->Add(this->button_clear);
			this->task->Controls->Add(this->button_calculate);
			this->task->Location = System::Drawing::Point(4, 25);
			this->task->Name = L"task";
			this->task->Padding = System::Windows::Forms::Padding(3);
			this->task->Size = System::Drawing::Size(274, 224);
			this->task->TabIndex = 0;
			this->task->Text = L"Задача";
			this->task->UseVisualStyleBackColor = true;
			this->task->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// label_frequency_result
			// 
			this->label_frequency_result->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label_frequency_result->AutoSize = true;
			this->label_frequency_result->Location = System::Drawing::Point(166, 119);
			this->label_frequency_result->Name = L"label_frequency_result";
			this->label_frequency_result->Size = System::Drawing::Size(0, 16);
			this->label_frequency_result->TabIndex = 11;
			// 
			// label_period_result
			// 
			this->label_period_result->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label_period_result->AutoSize = true;
			this->label_period_result->Location = System::Drawing::Point(166, 90);
			this->label_period_result->Name = L"label_period_result";
			this->label_period_result->Size = System::Drawing::Size(0, 16);
			this->label_period_result->TabIndex = 10;
			// 
			// label_frequency
			// 
			this->label_frequency->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label_frequency->AutoSize = true;
			this->label_frequency->Location = System::Drawing::Point(62, 120);
			this->label_frequency->Name = L"label_frequency";
			this->label_frequency->Size = System::Drawing::Size(79, 16);
			this->label_frequency->TabIndex = 9;
			this->label_frequency->Text = L"Частота (v)";
			// 
			// input_induct
			// 
			this->input_induct->Location = System::Drawing::Point(166, 56);
			this->input_induct->Name = L"input_induct";
			this->input_induct->Size = System::Drawing::Size(100, 22);
			this->input_induct->TabIndex = 7;
			// 
			// input_capacitor
			// 
			this->input_capacitor->Location = System::Drawing::Point(166, 17);
			this->input_capacitor->Name = L"input_capacitor";
			this->input_capacitor->Size = System::Drawing::Size(100, 22);
			this->input_capacitor->TabIndex = 6;
			// 
			// Label_period
			// 
			this->Label_period->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Label_period->AutoSize = true;
			this->Label_period->Location = System::Drawing::Point(62, 90);
			this->Label_period->Name = L"Label_period";
			this->Label_period->Size = System::Drawing::Size(72, 16);
			this->Label_period->TabIndex = 5;
			this->Label_period->Text = L"Період (T)";
			// 
			// label_period_input
			// 
			this->label_period_input->AutoSize = true;
			this->label_period_input->Location = System::Drawing::Point(9, 46);
			this->label_period_input->Name = L"label_period_input";
			this->label_period_input->Size = System::Drawing::Size(149, 32);
			this->label_period_input->TabIndex = 4;
			this->label_period_input->Text = L"Введіть індуктивність\r\nконденсатора";
			// 
			// label_capacitor_input
			// 
			this->label_capacitor_input->AutoSize = true;
			this->label_capacitor_input->Location = System::Drawing::Point(9, 7);
			this->label_capacitor_input->Name = L"label_capacitor_input";
			this->label_capacitor_input->Size = System::Drawing::Size(109, 32);
			this->label_capacitor_input->TabIndex = 3;
			this->label_capacitor_input->Text = L"Введіть ємність\r\nконденсатора";
			// 
			// button_exit
			// 
			this->button_exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_exit->AutoSize = true;
			this->button_exit->Location = System::Drawing::Point(166, 186);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(100, 30);
			this->button_exit->TabIndex = 2;
			this->button_exit->Text = L"Вийти";
			this->button_exit->UseVisualStyleBackColor = true;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// button_clear
			// 
			this->button_clear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button_clear->AutoSize = true;
			this->button_clear->Location = System::Drawing::Point(12, 186);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(100, 30);
			this->button_clear->TabIndex = 1;
			this->button_clear->Text = L"Очистити";
			this->button_clear->UseVisualStyleBackColor = true;
			this->button_clear->Click += gcnew System::EventHandler(this, &MyForm::button_clear_Click);
			// 
			// button_calculate
			// 
			this->button_calculate->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button_calculate->Location = System::Drawing::Point(86, 150);
			this->button_calculate->Name = L"button_calculate";
			this->button_calculate->Size = System::Drawing::Size(102, 30);
			this->button_calculate->TabIndex = 0;
			this->button_calculate->Text = L"Обчислити";
			this->button_calculate->UseVisualStyleBackColor = true;
			this->button_calculate->Click += gcnew System::EventHandler(this, &MyForm::button_calculate_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->task);
			this->tabControl1->Controls->Add(this->change_form);
			this->tabControl1->Controls->Add(this->expression);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(282, 253);
			this->tabControl1->TabIndex = 6;
			// 
			// change_form
			// 
			this->change_form->Controls->Add(this->button6);
			this->change_form->Controls->Add(this->button_changeOpacity);
			this->change_form->Controls->Add(this->button_resize);
			this->change_form->Controls->Add(this->button_borderChange);
			this->change_form->Location = System::Drawing::Point(4, 25);
			this->change_form->Name = L"change_form";
			this->change_form->Padding = System::Windows::Forms::Padding(3);
			this->change_form->Size = System::Drawing::Size(274, 224);
			this->change_form->TabIndex = 2;
			this->change_form->Text = L"Зміна форми";
			this->change_form->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(190, 157);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(1, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button_changeOpacity
			// 
			this->button_changeOpacity->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_changeOpacity->Location = System::Drawing::Point(199, 83);
			this->button_changeOpacity->Margin = System::Windows::Forms::Padding(5);
			this->button_changeOpacity->Name = L"button_changeOpacity";
			this->button_changeOpacity->Size = System::Drawing::Size(75, 25);
			this->button_changeOpacity->TabIndex = 2;
			this->button_changeOpacity->Text = L"Opacity";
			this->button_changeOpacity->UseVisualStyleBackColor = true;
			this->button_changeOpacity->Click += gcnew System::EventHandler(this, &MyForm::button_changeOpacity_Click);
			// 
			// button_resize
			// 
			this->button_resize->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_resize->Location = System::Drawing::Point(100, 83);
			this->button_resize->Margin = System::Windows::Forms::Padding(5);
			this->button_resize->Name = L"button_resize";
			this->button_resize->Size = System::Drawing::Size(75, 25);
			this->button_resize->TabIndex = 1;
			this->button_resize->Text = L"Resize";
			this->button_resize->UseVisualStyleBackColor = true;
			this->button_resize->Click += gcnew System::EventHandler(this, &MyForm::button_resize_Click);
			// 
			// button_borderChange
			// 
			this->button_borderChange->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button_borderChange->Location = System::Drawing::Point(0, 83);
			this->button_borderChange->Margin = System::Windows::Forms::Padding(5);
			this->button_borderChange->Name = L"button_borderChange";
			this->button_borderChange->Size = System::Drawing::Size(75, 25);
			this->button_borderChange->TabIndex = 0;
			this->button_borderChange->Text = L"Border Style";
			this->button_borderChange->UseVisualStyleBackColor = true;
			this->button_borderChange->Click += gcnew System::EventHandler(this, &MyForm::button_borderChange_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(100, 200);
			this->MaximumSize = System::Drawing::Size(500, 320);
			this->MinimumSize = System::Drawing::Size(300, 300);
			this->Name = L"MyForm";
			this->Opacity = 0.75;
			this->Text = L"Булка Андрій ІПЗ-25";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->expression->ResumeLayout(false);
			this->expression->PerformLayout();
			this->task->ResumeLayout(false);
			this->task->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->change_form->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void button_calculate_expression_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		double y = Convert::ToDouble(input_y->Text);
		double n = Convert::ToDouble(input_n->Text);
		double sinY = std::sin(y);
		if (abs(sinY) < 1e-9) {
			MessageBox::Show("Ошибка: sin(y) равен 0, деление на ноль невозможно!",
				"Ошибка вычислений",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
			return;
		}
		double D = std::pow(y, 2) + (0.5 * n + 4.8) / sinY;
		label_result_Z->Text = "Результат D: " + D.ToString();
	}
	catch (System::FormatException^) {
		MessageBox::Show("Будь ласка, введіть коректні числові значення для n та y!",
			"Помилка вводу",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
private: System::Void button_clear_expression_Click(System::Object^ sender, System::EventArgs^ e) {
	input_y->Text = "";
	input_n->Text = "";
	label_result_Z->Text = "Результат D: ...";
}

private: System::Void button_exit_expression_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button_clear_Click(System::Object^ sender, System::EventArgs^ e) {
	input_induct->Text = "";
	input_capacitor->Text = "";
	label_period_result->Text = ": ...";
	label_frequency_result->Text = ": ...";
}
private: System::Void button_calculate_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		double L = Convert::ToDouble(input_induct->Text);
		double C = Convert::ToDouble(input_capacitor->Text);
		if (L <= 0 || C <= 0) {
			MessageBox::Show("Індуктивність та ємність повинні бути додатними числами!",
				"Помилка вводу",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			return;
		}
		double T = 2 * M_PI * std::sqrt(L * C);
		double v = 1 / T;
		label_period_result->Text = ": " + T.ToString();
		label_frequency_result->Text = ": " + v.ToString();
	}
	catch (System::FormatException^) {
		MessageBox::Show("Будь ласка, введіть коректні числові значення для індуктивності та ємності!",
			"Помилка вводу",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}
private: System::Void button_borderChange_Click(System::Object^ sender, System::EventArgs^ e) {
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Sizable;
}
private: System::Void button_resize_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Size = System::Drawing::Size(400, 500);
	System::Drawing::Size newButtonSize = System::Drawing::Size(70, 25*1.6);
	button_borderChange->Size = newButtonSize;
	button_resize->Size = newButtonSize;
	button_changeOpacity->Size = newButtonSize;
}
private: System::Void button_changeOpacity_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Opacity = 1;
}
};
}
