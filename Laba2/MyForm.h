#pragma once

namespace Laba2 {

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;


	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(15, 173);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(638, 387);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Введите N";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Введите M";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(289, 63);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 63);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Cоздать матрицу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(11, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1051, 22);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Дана матрица размера M x N. Заменить каждый отрицательный элемент этой матрицы на"
				L" сумму элементов своей строки.";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(678, 173);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(305, 105);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Запустить программу";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(678, 317);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(305, 105);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Очистить ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(440, 63);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(127, 63);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Проверить корректность данных";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(120, 63);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			this->numericUpDown1->TabIndex = 11;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(120, 105);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 22);
			this->numericUpDown2->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1076, 588);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: bool CheckForCorrectData(int n, int m)
	{
		bool is_digit;
		bool flag_on_correct = 1;
		int value;

		for (int i = 0;i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if ((is_digit = Int32::TryParse(Convert::ToString(dataGridView1->Rows[i]->Cells[j]->Value), value)) == 0)
				{
					flag_on_correct = 0;
				}
			}

		}

		if (flag_on_correct)
		{
			button2->Enabled = true;
			button3->Enabled = true;
			return 1;
		}
		else
		{
			button2->Enabled = false;
			button3->Enabled = false;
			return 0;
		}
	}


	private: void FilingTheArray(int n, int m, int arr[100][100])
	{

		dataGridView1->RowCount = n;
		dataGridView1->ColumnCount = m;

		if (CheckForCorrectData(n, m)) {

			for (int i = 0; i < n;i++)
			{
				for (int j = 0; j < m; j++)
				{
					arr[i][j] = System::Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
				}
			}
		}
		
	}


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
	int n{}, m{}, arr[100][100];


	n = System::Convert::ToInt32(numericUpDown1->Text);
	m = System::Convert::ToInt32(numericUpDown2->Text);

	dataGridView1->RowCount = n;
	dataGridView1->ColumnCount = m;
	/*

	for (int i = 0; i < n;i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = System::Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
		}
	}*/

	//button2->Enabled = true;
	//button3->Enabled = true;
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	int n, m, arr[100][100];

	n = System::Convert::ToInt32(numericUpDown1->Text);
	m = System::Convert::ToInt32(numericUpDown2->Text);

	
	FilingTheArray(n, m, arr);
	

	/*for (int i = 0; i < n;i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = System::Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
		}
	}*/
	
	if (CheckForCorrectData(n, m)) {
		for (int i = 0; i < n; i++)
		{
			int sum = 0;
			bool flag{ 0 };

			for (int j = 0; j < m; j++)
			{
				sum += arr[i][j];
				if (arr[i][j] < 0) flag = 1;
			}
			if (flag) {
				for (int j = 0;j < m; j++)
				{
					if (arr[i][j] < 0) arr[i][j] = sum;
				}
			}

		}

		for (int i = 0; i < n;i++)
		{
			for (int j = 0; j < m; j++)
			{
				dataGridView1->Rows[i]->Cells[j]->Value = Convert::ToString(arr[i][j]);
			}
		}
		button2->Enabled = false;
	}
	
}

private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	int n, m, arr[100][100] = { 0};

	n = System::Convert::ToInt32(numericUpDown1->Text);
	m = System::Convert::ToInt32(numericUpDown2->Text);

	dataGridView1->RowCount = n;
	dataGridView1->ColumnCount = m;

	for (int i = 0; i < n;i++)
	{
		for (int j = 0; j < m; j++)
		{
			dataGridView1->Rows[i]->Cells[j]->Value = Convert::ToString(arr[i][j]);
		}
	}

}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	int n, m, arr[100][100] = {0 };

	n = System::Convert::ToInt32(numericUpDown1->Text);
	m = System::Convert::ToInt32(numericUpDown2->Text);

	CheckForCorrectData(n, m);
}

private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
