#pragma once
#include <math.h>

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
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;








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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(403, 19);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(668, 402);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(295, 226);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 100);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->X, this->F_1,
					this->Column1, this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(1098, 19);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(513, 331);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// X
			// 
			this->X->HeaderText = L"i";
			this->X->Name = L"X";
			this->X->ReadOnly = true;
			this->X->Width = 50;
			// 
			// F_1
			// 
			this->F_1->HeaderText = L"xi";
			this->F_1->Name = L"F_1";
			this->F_1->ReadOnly = true;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Vi";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"hi";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"ОЛП";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"C1";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"C2";
			this->Column5->Name = L"Column5";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(136, 261);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"n";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(168, 261);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(60, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"10";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(136, 296);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"h";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(167, 296);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(60, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"0,1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(136, 226);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"u0";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(168, 226);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(60, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"1,0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(18, 261);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"a1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(18, 296);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"a2";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(51, 261);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(60, 22);
			this->textBox4->TabIndex = 11;
			this->textBox4->Text = L"1,0";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(51, 296);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(60, 22);
			this->textBox5->TabIndex = 12;
			this->textBox5->Text = L"1,0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(18, 226);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"m";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(51, 226);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(60, 22);
			this->textBox6->TabIndex = 14;
			this->textBox6->Text = L"1,0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(18, 19);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(349, 187);
			this->label7->TabIndex = 15;
			this->label7->Text = resources->GetString(L"label7.Text");
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(33, 49);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 17);
			this->label8->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 76);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 17);
			this->label9->TabIndex = 17;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 93);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 17);
			this->label10->TabIndex = 18;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(18, 328);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(16, 17);
			this->label11->TabIndex = 19;
			this->label11->Text = L"b";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(51, 328);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(60, 22);
			this->textBox7->TabIndex = 20;
			this->textBox7->Text = L"1,0";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(21, 372);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(129, 21);
			this->checkBox1->TabIndex = 21;
			this->checkBox1->Text = L"Контроль шага";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(136, 328);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(16, 17);
			this->label12->TabIndex = 22;
			this->label12->Text = L"e";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(168, 327);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(60, 22);
			this->textBox8->TabIndex = 23;
			this->textBox8->Text = L"0,01";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(1095, 404);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(73, 17);
			this->label13->TabIndex = 24;
			this->label13->Text = L"Max OLP: ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(1385, 359);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(76, 17);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Summ C1: ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(1385, 376);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(76, 17);
			this->label15->TabIndex = 26;
			this->label15->Text = L"Summ C2: ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(1095, 359);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(248, 34);
			this->label16->TabIndex = 27;
			this->label16->Text = L"С1 - счётчик удвоенний шага\r\nС2 - счётчик деления шага пополам";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(1318, 421);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(53, 17);
			this->label17->TabIndex = 28;
			this->label17->Text = L"Max h: ";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(1318, 404);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(50, 17);
			this->label18->TabIndex = 29;
			this->label18->Text = L"Min h: ";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(1464, 404);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(59, 17);
			this->label19->TabIndex = 30;
			this->label19->Text = L"b - xn = ";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(1464, 421);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(32, 17);
			this->label20->TabIndex = 31;
			this->label20->Text = L"n = ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1629, 455);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Свободный (горизонтальный) полёт точки";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion 
private:
	double du(double x, double u)
	{
		double m = Convert::ToDouble(textBox6->Text); 
		double a1 = Convert::ToDouble(textBox4->Text); 
		double a2 = Convert::ToDouble(textBox5->Text); 
		return ((-1) * (a1 * u + a2 * u * u) / m);
	}

	double RK_5(double x, double v, double h)
	{
		double x1 = x + h;
		double k1 = du(x, v);
		double k2 = du(x + h / 2, v + (h / 2) * k1);
		double k3 = du(x + h, v + h * ((-1) * k1 + 2 * k2));
		return (v + (h / 6) * (k1 + 4 * k2 + k3));
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
	GraphPane^ panel = zedGraphControl1->GraphPane;
	panel->CurveList->Clear();
	PointPairList^ RK5_list = gcnew ZedGraph::PointPairList();

	double x = 0.0;
	int n = Convert::ToInt32(textBox1->Text);
	double h = Convert::ToDouble(textBox2->Text);
	double u0 = Convert::ToDouble(textBox3->Text);
	double ee = Convert::ToDouble(textBox8->Text);
	double b = Convert::ToDouble(textBox7->Text);
	double v = u0;
	double s = 0.0;
	int c1 = 0;
	int c2 = 0;
	int k = 0;
	double maxh = h;
	double minh = h;
	double maxs = s;

	if (checkBox1->Checked)
	{
		dataGridView1->Rows->Add();
		dataGridView1->Rows[0]->Cells[0]->Value = 0;
		dataGridView1->Rows[0]->Cells[1]->Value = x;
		dataGridView1->Rows[0]->Cells[2]->Value = v;
		dataGridView1->Rows[0]->Cells[3]->Value = h;
		dataGridView1->Rows[0]->Cells[4]->Value = s;
		dataGridView1->Rows[0]->Cells[5]->Value = c1;
		dataGridView1->Rows[0]->Cells[6]->Value = c2;

		RK5_list->Add(x, v);

		for (int i = 0; (i < n) && (x < b); i++)
		{
			double x2 = x + h / 2.0;
			double v2 = RK_5(x, v, h / 2.0);
			double vn = RK_5(x, v, h);
			s = (RK_5(x2, v2, h / 2.0) - vn) / 7.0;

			if (ee / 16.0 > fabs(s))
			{
				x = x + h;
				c1++;
				v = vn;
				k++;

				if (maxs < s)
					maxs = s;
				if (maxh < h)
					maxh = h;
				if (minh > h)
					minh = h;

				dataGridView1->Rows->Add();
				dataGridView1->Rows[k]->Cells[0]->Value = k;
				dataGridView1->Rows[k]->Cells[1]->Value = x;
				dataGridView1->Rows[k]->Cells[2]->Value = v;
				dataGridView1->Rows[k]->Cells[3]->Value = h;
				dataGridView1->Rows[k]->Cells[4]->Value = s;
				dataGridView1->Rows[k]->Cells[5]->Value = c1;
				dataGridView1->Rows[k]->Cells[6]->Value = c2;

				RK5_list->Add(x, v);

				h = h * 2.0;
			}
			else
				if (fabs(s) > ee)
				{
					h = h / 2.0;
					c2++;
				}
				else
				{
					x = x + h;
					v = vn;
					k++;

					if (maxs < s)
						maxs = s;
					if (maxh < h)
						maxh = h;
					if (minh > h)
						minh = h;

					dataGridView1->Rows->Add();
					dataGridView1->Rows[k]->Cells[0]->Value = k;
					dataGridView1->Rows[k]->Cells[1]->Value = x;
					dataGridView1->Rows[k]->Cells[2]->Value = v;
					dataGridView1->Rows[k]->Cells[3]->Value = h;
					dataGridView1->Rows[k]->Cells[4]->Value = s;
					dataGridView1->Rows[k]->Cells[5]->Value = c1;
					dataGridView1->Rows[k]->Cells[6]->Value = c2;

					RK5_list->Add(x, v);
				}
		}
	}
	else
	{
		dataGridView1->Rows->Add();
		dataGridView1->Rows[0]->Cells[0]->Value = 0;
		dataGridView1->Rows[0]->Cells[1]->Value = x;
		dataGridView1->Rows[0]->Cells[2]->Value = v;
		dataGridView1->Rows[0]->Cells[3]->Value = h;
		dataGridView1->Rows[0]->Cells[4]->Value = s;
		dataGridView1->Rows[0]->Cells[5]->Value = c1;
		dataGridView1->Rows[0]->Cells[6]->Value = c2;

		RK5_list->Add(x, v);

		for (int i = 0; (i < n) && (x < b); i++)
		{
			v = RK_5(x, v, h);
			x = x + h;
			k++;

			dataGridView1->Rows->Add();
			dataGridView1->Rows[k]->Cells[0]->Value = k;
			dataGridView1->Rows[k]->Cells[1]->Value = x;
			dataGridView1->Rows[k]->Cells[2]->Value = v;
			dataGridView1->Rows[k]->Cells[3]->Value = h;
			dataGridView1->Rows[k]->Cells[4]->Value = s;
			dataGridView1->Rows[k]->Cells[5]->Value = c1;
			dataGridView1->Rows[k]->Cells[6]->Value = c2;

			RK5_list->Add(x, v);
		}
	}
	
	label13->Text = "Max OLP: " + Convert::ToString(maxs);
	label14->Text = "Summ C1: " + Convert::ToString(c1);
	label15->Text = "Summ C2: " + Convert::ToString(c2);
	label17->Text = "Max h: " + Convert::ToString(maxh);
	label18->Text = "Min h: " + Convert::ToString(minh);
	label20->Text = "n = " + Convert::ToString(k);
	label19->Text = "b - xn = " + Convert::ToString(b - x);

	LineItem Curve1 = panel->AddCurve("du", RK5_list, Color::Red, SymbolType::Plus);
	zedGraphControl1->AxisChange();
	zedGraphControl1->Invalidate();
}
private: System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

