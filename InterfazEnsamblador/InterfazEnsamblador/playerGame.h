#pragma once

namespace InterfazEnsamblador {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de playerGame
	/// </summary>
	public ref class playerGame : public System::Windows::Forms::Form
	{
	public:
		playerGame(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~playerGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button10;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ previousPlay;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->previousPlay = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button10->Location = System::Drawing::Point(332, 509);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(49, 48);
			this->button10->TabIndex = 36;
			this->button10->Text = L"10";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AccessibleName = L"previuosPlay";
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->Location = System::Drawing::Point(548, 94);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 33);
			this->label6->TabIndex = 35;
			this->label6->Text = L"0";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::Color::Red;
			this->exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exit->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit->ForeColor = System::Drawing::Color::Black;
			this->exit->Location = System::Drawing::Point(504, 583);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(169, 58);
			this->exit->TabIndex = 34;
			this->exit->Text = L"SALIR";
			this->exit->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(459, 41);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(233, 43);
			this->label5->TabIndex = 33;
			this->label5->Text = L"CONTADOR";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button9->Location = System::Drawing::Point(404, 442);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(49, 48);
			this->button9->TabIndex = 32;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button8->Location = System::Drawing::Point(332, 442);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(49, 48);
			this->button8->TabIndex = 31;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button7->Location = System::Drawing::Point(265, 442);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(49, 48);
			this->button7->TabIndex = 30;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button6->Location = System::Drawing::Point(404, 352);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(49, 48);
			this->button6->TabIndex = 29;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button5->Location = System::Drawing::Point(332, 352);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(49, 48);
			this->button5->TabIndex = 28;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button4->Location = System::Drawing::Point(265, 352);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(49, 48);
			this->button4->TabIndex = 27;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Location = System::Drawing::Point(404, 264);
			this->button3->Name = L"button3";
			this->button3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button3->Size = System::Drawing::Size(49, 48);
			this->button3->TabIndex = 26;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Cornsilk;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->ForeColor = System::Drawing::Color::Brown;
			this->button2->Location = System::Drawing::Point(332, 264);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 48);
			this->button2->TabIndex = 25;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(265, 264);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(49, 48);
			this->button1->TabIndex = 24;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(248, 252);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(219, 314);
			this->label4->TabIndex = 23;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// previousPlay
			// 
			this->previousPlay->AccessibleName = L"previuosPlay";
			this->previousPlay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->previousPlay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->previousPlay->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->previousPlay->ForeColor = System::Drawing::Color::Black;
			this->previousPlay->Location = System::Drawing::Point(107, 136);
			this->previousPlay->Name = L"previousPlay";
			this->previousPlay->Size = System::Drawing::Size(46, 32);
			this->previousPlay->TabIndex = 22;
			this->previousPlay->Text = L"0";
			this->previousPlay->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(62, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 33);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Jugada anterior:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(20, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(233, 43);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Computadora";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 39.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FloralWhite;
			this->label1->Location = System::Drawing::Point(233, 176);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(249, 60);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Jugador 1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &playerGame::label1_Click);
			// 
			// playerGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(713, 683);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->previousPlay);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"playerGame";
			this->Text = L"playerGame";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
