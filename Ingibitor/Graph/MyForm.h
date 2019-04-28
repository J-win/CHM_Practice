#pragma once
#include <math.h>

struct sistema {
	double u1;
	double u2;
	sistema(const double u1_ = 0, const double u2_ = 0) {
		u1 = u1_;
		u2 = u2_;
	}
	sistema(const sistema &z) {
		u1 = z.u1;
		u2 = z.u2;
	}
	sistema& operator=(const sistema &z) {
		u1 = z.u1;
		u2 = z.u2;
		return *this;
	}
	sistema operator+(const sistema &z) const {
		return (sistema(u1 + z.u1, u2 + z.u2));
	}
	sistema operator-(const sistema &z) const {
		return (sistema(u1 - z.u2, u2 - z.u2));
	}
	sistema operator*(const double x) const {
		return (sistema(u1 * x, u2 * x));
	}
	sistema operator/(const double x) const {
		return (sistema(u1 / x, u2 / x));
	}
};
sistema operator*(const double x, const sistema &z) {
	return (z * x);
}

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label37;









	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox7;










	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::TextBox^  textBox9;

















	private: System::Windows::Forms::TabPage^  tabPage7;
	private: ZedGraph::ZedGraphControl^  zedGraphControl5;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: ZedGraph::ZedGraphControl^  zedGraphControl4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: ZedGraph::ZedGraphControl^  zedGraphControl3;
	private: System::Windows::Forms::TabControl^  tabControl2;








private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
private: System::Windows::Forms::Button^  button2;

















	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl5 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl4 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabPage7->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(31, 466);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 60);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 310);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Правая граница для t";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(205, 307);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(60, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"100";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 277);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(180, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Начальная значение u2.0";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(205, 272);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(60, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(28, 352);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(131, 17);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Начальный шаг h0";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(205, 347);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(60, 22);
			this->textBox4->TabIndex = 15;
			this->textBox4->Text = L"0,1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(28, 386);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 17);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Max n";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(205, 383);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(60, 22);
			this->textBox5->TabIndex = 17;
			this->textBox5->Text = L"100";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(31, 551);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(129, 21);
			this->checkBox1->TabIndex = 21;
			this->checkBox1->Text = L"Контроль шага";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(28, 422);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(107, 17);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Погрешность e";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(205, 419);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(60, 22);
			this->textBox6->TabIndex = 23;
			this->textBox6->Text = L"0,001";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Location = System::Drawing::Point(275, 451);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(770, 529);
			this->tabControl1->TabIndex = 25;
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->label43);
			this->tabPage8->Controls->Add(this->label42);
			this->tabPage8->Controls->Add(this->label41);
			this->tabPage8->Controls->Add(this->label40);
			this->tabPage8->Controls->Add(this->label39);
			this->tabPage8->Controls->Add(this->label38);
			this->tabPage8->Controls->Add(this->label37);
			this->tabPage8->Controls->Add(this->dataGridView3);
			this->tabPage8->Location = System::Drawing::Point(4, 25);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(762, 500);
			this->tabPage8->TabIndex = 2;
			this->tabPage8->Text = L"Таблица результатов";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(303, 431);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(32, 17);
			this->label43->TabIndex = 34;
			this->label43->Text = L"n = ";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(303, 414);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(59, 17);
			this->label42->TabIndex = 33;
			this->label42->Text = L"b - xn = ";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(303, 396);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(50, 17);
			this->label41->TabIndex = 31;
			this->label41->Text = L"Min h: ";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(303, 379);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(53, 17);
			this->label40->TabIndex = 30;
			this->label40->Text = L"Max h: ";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(6, 420);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(66, 17);
			this->label39->TabIndex = 29;
			this->label39->Text = L"Num C2: ";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(6, 403);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(66, 17);
			this->label38->TabIndex = 28;
			this->label38->Text = L"Num C1: ";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(6, 381);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(73, 17);
			this->label37->TabIndex = 27;
			this->label37->Text = L"Max OLP: ";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn6,
					this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9
			});
			this->dataGridView3->Location = System::Drawing::Point(0, 0);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->Size = System::Drawing::Size(760, 377);
			this->dataGridView3->TabIndex = 3;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"i";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"ti";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"V1i";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"V2i";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"ОЛП";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"hi";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"C1";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"C2";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(28, 188);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(91, 17);
			this->label35->TabIndex = 42;
			this->label35->Text = L"Параметр ro";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(28, 216);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(94, 17);
			this->label36->TabIndex = 43;
			this->label36->Text = L"Параметр nu";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(205, 185);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(60, 22);
			this->textBox1->TabIndex = 44;
			this->textBox1->Text = L"1";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(205, 213);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(60, 22);
			this->textBox7->TabIndex = 45;
			this->textBox7->Text = L"1";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(28, 248);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(180, 17);
			this->label45->TabIndex = 48;
			this->label45->Text = L"Начальное значение u1.0";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(205, 243);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(60, 22);
			this->textBox9->TabIndex = 49;
			this->textBox9->Text = L"1";
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->zedGraphControl5);
			this->tabPage7->Location = System::Drawing::Point(4, 25);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(762, 402);
			this->tabPage7->TabIndex = 4;
			this->tabPage7->Text = L"График u1 от u2";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl5
			// 
			this->zedGraphControl5->Location = System::Drawing::Point(0, 0);
			this->zedGraphControl5->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl5->Name = L"zedGraphControl5";
			this->zedGraphControl5->ScrollGrace = 0;
			this->zedGraphControl5->ScrollMaxX = 0;
			this->zedGraphControl5->ScrollMaxY = 0;
			this->zedGraphControl5->ScrollMaxY2 = 0;
			this->zedGraphControl5->ScrollMinX = 0;
			this->zedGraphControl5->ScrollMinY = 0;
			this->zedGraphControl5->ScrollMinY2 = 0;
			this->zedGraphControl5->Size = System::Drawing::Size(760, 402);
			this->zedGraphControl5->TabIndex = 1;
			this->zedGraphControl5->GraphPane->XAxis->Title->Text = "u2";
			this->zedGraphControl5->GraphPane->YAxis->Title->Text = "u1";
			this->zedGraphControl5->GraphPane->Title->Text = "u1(u2)";
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->zedGraphControl4);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(762, 402);
			this->tabPage6->TabIndex = 3;
			this->tabPage6->Text = L"График u2 от x";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl4
			// 
			this->zedGraphControl4->Location = System::Drawing::Point(0, 0);
			this->zedGraphControl4->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl4->Name = L"zedGraphControl4";
			this->zedGraphControl4->ScrollGrace = 0;
			this->zedGraphControl4->ScrollMaxX = 0;
			this->zedGraphControl4->ScrollMaxY = 0;
			this->zedGraphControl4->ScrollMaxY2 = 0;
			this->zedGraphControl4->ScrollMinX = 0;
			this->zedGraphControl4->ScrollMinY = 0;
			this->zedGraphControl4->ScrollMinY2 = 0;
			this->zedGraphControl4->Size = System::Drawing::Size(762, 402);
			this->zedGraphControl4->TabIndex = 1;
			this->zedGraphControl4->GraphPane->XAxis->Title->Text = "t";
			this->zedGraphControl4->GraphPane->YAxis->Title->Text = "u2";
			this->zedGraphControl4->GraphPane->Title->Text = "u2(t)";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->zedGraphControl3);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(762, 402);
			this->tabPage5->TabIndex = 2;
			this->tabPage5->Text = L"График u1 от x";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->Location = System::Drawing::Point(0, 0);
			this->zedGraphControl3->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(760, 402);
			this->zedGraphControl3->TabIndex = 1;
			this->zedGraphControl3->GraphPane->XAxis->Title->Text = "t";
			this->zedGraphControl3->GraphPane->YAxis->Title->Text = "u1";
			this->zedGraphControl3->GraphPane->Title->Text = "u1(t)";
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Location = System::Drawing::Point(275, 14);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(770, 431);
			this->tabControl2->TabIndex = 36;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(242, 85);
			this->label1->TabIndex = 50;
			this->label1->Text = L"du1/dt = k*u1*u1/u2 + ro - gamma*u1\r\ndu2/dt = c*u1*u1 - nu*u2\r\nk=c=gamma=1\r\nu1(0)"
				L"=u1.0\r\nu2(0)=u2.0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 117);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(150, 34);
			this->label4->TabIndex = 51;
			this->label4->Text = L"u1\'=u1*u1/u2 + ro - u1\r\nu2\'=u1*u1 - nu*u2";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(37, 598);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 60);
			this->button2->TabIndex = 52;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1058, 1002);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->tabControl2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabPage7->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion 

		sistema du_2(double x, sistema z) {
			double ro = Convert::ToDouble(textBox1->Text);
			double nu = Convert::ToDouble(textBox7->Text);
			return (sistema(z.u1 * z.u1 / z.u2 + ro - z.u1, z.u1 * z.u1 - nu * z.u2));
		}
		sistema RK_7_du_2(double x, sistema z, double h) {
			sistema k1 = du_2(x, z);
			sistema k2 = du_2(x + h / 2, z + (h / 2) * k1);
			sistema k3 = du_2(x + h / 2, z + (h / 2) * k2);
			sistema k4 = du_2(x + h, z + h * k3);
			return (z + (h / 6) * (k1 + 2 * k2 + 2 * k3 + k4));
		}
		void print_du_tab2(int k, double x, sistema v, double s, double h, int c1, int c2) {
			dataGridView3->Rows->Add();
			dataGridView3->Rows[k]->Cells[0]->Value = k;
			dataGridView3->Rows[k]->Cells[1]->Value = x;
			dataGridView3->Rows[k]->Cells[2]->Value = v.u1;
			dataGridView3->Rows[k]->Cells[3]->Value = v.u2;
			dataGridView3->Rows[k]->Cells[4]->Value = s;
			dataGridView3->Rows[k]->Cells[5]->Value = h;
			dataGridView3->Rows[k]->Cells[6]->Value = c1;
			dataGridView3->Rows[k]->Cells[7]->Value = c2;
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		dataGridView3->Rows->Clear();
		PointPairList^ u1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ u2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ u1u2_list = gcnew ZedGraph::PointPairList();
		double b = Convert::ToDouble(textBox2->Text);
		double u2 = Convert::ToDouble(textBox3->Text);
		double u1 = Convert::ToDouble(textBox9->Text);
		double h0 = Convert::ToDouble(textBox4->Text);
		int n = Convert::ToInt32(textBox5->Text);
		double ee = Convert::ToDouble(textBox6->Text);
		double x0 = 0.0;
		double x = x0;
		double h = h0;
		sistema v(u1, u2);
		double s = 0.0;
		int c1 = 0;
		int c2 = 0;
		double maxs = s;
		double maxh = h;
		double minh = h;
		int k = 0;
		int i = 0;
		if (checkBox1->Checked) {
			print_du_tab2(0, x, v, s, h, c1, c2);
			u1_list->Add(x, v.u1);
			u2_list->Add(x, v.u2);
			u1u2_list->Add(v.u2, v.u1);
			for (i = 0; (i < n) && (x + h < b); i++) {
				double x12 = x + h / 2.0;
				sistema v12 = RK_7_du_2(x, v, h / 2.0);
				sistema vn = RK_7_du_2(x, v, h);
				sistema ss = (RK_7_du_2(x12, v12, h / 2.0) - vn) / 15.0;
				s = sqrt(ss.u1 * ss.u1 + ss.u2 * ss.u2);
				if ((ee / 32.0) > fabs(s)) {
					x = x + h;
					c2++;
					v = vn;
					k++;
					if (maxs < fabs(s))
						maxs = fabs(s);
					if (maxh < h)
						maxh = h;
					if (minh > h)
						minh = h;
					print_du_tab2(k, x, v, s, h, c1, c2);
					u1_list->Add(x, v.u1);
					u2_list->Add(x, v.u2);
					u1u2_list->Add(v.u2, v.u1);
					h = h * 2.0;
				}
				else
					if (fabs(s) > ee) {
						h = h / 2.0;
						c1++;
					}
					else {
						x = x + h;
						v = vn;
						k++;
						if (maxs < fabs(s))
							maxs = fabs(s);
						if (maxh < h)
							maxh = h;
						if (minh > h)
							minh = h;
						print_du_tab2(k, x, v, s, h, c1, c2);
						u1_list->Add(x, v.u1);
						u2_list->Add(x, v.u2);
						u1u2_list->Add(v.u2, v.u1);
					}
			}
		}
		else {
			print_du_tab2(0, x, v, s, h, c1, c2);
			u1_list->Add(x, v.u1);
			u2_list->Add(x, v.u2);
			u1u2_list->Add(v.u2, v.u1);
			for (i = 0; (i < n) && (x + h < b); i++) {
				v = RK_7_du_2(x, v, h);
				x = x + h;
				k++;
				print_du_tab2(k, x, v, s, h, c1, c2);
				u1_list->Add(x, v.u1);
				u2_list->Add(x, v.u2);
				u1u2_list->Add(v.u2, v.u1);
			}
		}
		label37->Text = "Max OLP: " + Convert::ToString(maxs);
		label38->Text = "Num C1: " + Convert::ToString(c1);
		label39->Text = "Num C2: " + Convert::ToString(c2);
		label40->Text = "Max h: " + Convert::ToString(maxh);
		label41->Text = "Min h: " + Convert::ToString(minh);
		label43->Text = "n = " + Convert::ToString(k);
		label42->Text = "b - xn = " + Convert::ToString(b - x);
		LineItem Curve4 = zedGraphControl3->GraphPane->AddCurve("u1", u1_list, Color::Green, SymbolType::None);
		LineItem Curve5 = zedGraphControl4->GraphPane->AddCurve("u2", u2_list, Color::Green, SymbolType::None);
		LineItem Curve6 = zedGraphControl5->GraphPane->AddCurve("u1u2", u1u2_list, Color::Green, SymbolType::None);
		zedGraphControl3->AxisChange();
		zedGraphControl3->Invalidate();
		zedGraphControl4->AxisChange();
		zedGraphControl4->Invalidate();
		zedGraphControl5->AxisChange();
		zedGraphControl5->Invalidate();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	zedGraphControl3->GraphPane->CurveList->Clear();
	zedGraphControl4->GraphPane->CurveList->Clear();
	zedGraphControl5->GraphPane->CurveList->Clear();
	zedGraphControl3->AxisChange();
	zedGraphControl3->Invalidate();
	zedGraphControl4->AxisChange();
	zedGraphControl4->Invalidate();
	zedGraphControl5->AxisChange();
	zedGraphControl5->Invalidate();
}
};
}