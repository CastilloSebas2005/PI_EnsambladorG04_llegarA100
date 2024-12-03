#pragma once

#include <cstdint>
#include <iostream>
#include <random>

extern "C" uint8_t analizeCounter(uint8_t *actualCounter);
extern "C" uint8_t updateCounter(uint8_t *counter, uint8_t *adder);

namespace InterfazEnsamblador {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de computerGame
	/// </summary>
	public ref class computerGame : public System::Windows::Forms::Form
	{
	public:
		computerGame(void)
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
		~computerGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ previousPlay;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Label^ label6;



	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;
		uint8_t previousPlayValue = 0;
		bool turn = true;
		void computerTurn() {
			uint8_t adder = this->counter;
			adder = analizeCounter(&adder);
			if (!adder) {
				// generate random number
				std::random_device rd;
				std::mt19937 gen(rd());
				std::uniform_int_distribution<> dis(1, 10);
				adder = dis(gen);
			}
			uint8_t actualCounter = this->counter;
			this->counter = updateCounter(&actualCounter, &adder);
			this->label6->Text = this->counter.ToString();
			this->previousPlay->Text = adder.ToString();
			turn = true;
		}
	private: System::Windows::Forms::Button^ button10;
		   uint8_t counter = 0;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Método necesario para admitir el Diseñador. No se puede modificar
		   /// el contenido de este método con el editor de código.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->previousPlay = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   this->button7 = (gcnew System::Windows::Forms::Button());
			   this->button8 = (gcnew System::Windows::Forms::Button());
			   this->button9 = (gcnew System::Windows::Forms::Button());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->exit = (gcnew System::Windows::Forms::Button());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->button10 = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 39.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->ForeColor = System::Drawing::Color::FloralWhite;
			   this->label1->Location = System::Drawing::Point(225, 158);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(249, 60);
			   this->label1->TabIndex = 1;
			   this->label1->Text = L"Jugador 1";
			   this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			   this->label1->Click += gcnew System::EventHandler(this, &computerGame::label1_Click);
			   // 
			   // label2
			   // 
			   this->label2->BackColor = System::Drawing::Color::White;
			   this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->ForeColor = System::Drawing::Color::Black;
			   this->label2->Location = System::Drawing::Point(12, 23);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(233, 43);
			   this->label2->TabIndex = 2;
			   this->label2->Text = L"Computadora";
			   this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			   this->label2->Click += gcnew System::EventHandler(this, &computerGame::label2_Click);
			   // 
			   // label3
			   // 
			   this->label3->BackColor = System::Drawing::Color::White;
			   this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->ForeColor = System::Drawing::Color::Black;
			   this->label3->Location = System::Drawing::Point(54, 76);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(154, 33);
			   this->label3->TabIndex = 3;
			   this->label3->Text = L"Jugada anterior:";
			   this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			   this->label3->Click += gcnew System::EventHandler(this, &computerGame::label3_Click_1);
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
			   this->previousPlay->Location = System::Drawing::Point(99, 118);
			   this->previousPlay->Name = L"previousPlay";
			   this->previousPlay->Size = System::Drawing::Size(46, 32);
			   this->previousPlay->TabIndex = 4;
			   this->previousPlay->Text = L"0";
			   this->previousPlay->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			   this->previousPlay->Click += gcnew System::EventHandler(this, &computerGame::label4_Click);
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
			   this->label4->Location = System::Drawing::Point(240, 234);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(219, 314);
			   this->label4->TabIndex = 5;
			   this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   this->label4->Click += gcnew System::EventHandler(this, &computerGame::label4_Click_1);
			   // 
			   // button1
			   // 
			   this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			   this->button1->ForeColor = System::Drawing::Color::Black;
			   this->button1->Location = System::Drawing::Point(257, 246);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(49, 48);
			   this->button1->TabIndex = 6;
			   this->button1->Text = L"1";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &computerGame::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::Cornsilk;
			   this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			   this->button2->ForeColor = System::Drawing::Color::Brown;
			   this->button2->Location = System::Drawing::Point(324, 246);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(49, 48);
			   this->button2->TabIndex = 7;
			   this->button2->Text = L"2";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &computerGame::button2_Click);
			   // 
			   // button3
			   // 
			   this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			   this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			   this->button3->Location = System::Drawing::Point(396, 246);
			   this->button3->Name = L"button3";
			   this->button3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			   this->button3->Size = System::Drawing::Size(49, 48);
			   this->button3->TabIndex = 8;
			   this->button3->Text = L"3";
			   this->button3->UseVisualStyleBackColor = false;
			   this->button3->Click += gcnew System::EventHandler(this, &computerGame::button3_Click);
			   // 
			   // button4
			   // 
			   this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			   this->button4->Location = System::Drawing::Point(257, 334);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(49, 48);
			   this->button4->TabIndex = 9;
			   this->button4->Text = L"4";
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &computerGame::button4_Click);
			   // 
			   // button5
			   // 
			   this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			   this->button5->Location = System::Drawing::Point(324, 334);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(49, 48);
			   this->button5->TabIndex = 10;
			   this->button5->Text = L"5";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &computerGame::button5_Click);
			   // 
			   // button6
			   // 
			   this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button6->FlatStyle = System::Windows::Forms::FlatStyle::System;
			   this->button6->Location = System::Drawing::Point(396, 334);
			   this->button6->Name = L"button6";
			   this->button6->Size = System::Drawing::Size(49, 48);
			   this->button6->TabIndex = 11;
			   this->button6->Text = L"6";
			   this->button6->UseVisualStyleBackColor = true;
			   this->button6->Click += gcnew System::EventHandler(this, &computerGame::button6_Click);
			   // 
			   // button7
			   // 
			   this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button7->FlatStyle = System::Windows::Forms::FlatStyle::System;
			   this->button7->Location = System::Drawing::Point(257, 424);
			   this->button7->Name = L"button7";
			   this->button7->Size = System::Drawing::Size(49, 48);
			   this->button7->TabIndex = 12;
			   this->button7->Text = L"7";
			   this->button7->UseVisualStyleBackColor = true;
			   this->button7->Click += gcnew System::EventHandler(this, &computerGame::button7_Click);
			   // 
			   // button8
			   // 
			   this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			   this->button8->Location = System::Drawing::Point(324, 424);
			   this->button8->Name = L"button8";
			   this->button8->Size = System::Drawing::Size(49, 48);
			   this->button8->TabIndex = 13;
			   this->button8->Text = L"8";
			   this->button8->UseVisualStyleBackColor = true;
			   this->button8->Click += gcnew System::EventHandler(this, &computerGame::button8_Click);
			   // 
			   // button9
			   // 
			   this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			   this->button9->Location = System::Drawing::Point(396, 424);
			   this->button9->Name = L"button9";
			   this->button9->Size = System::Drawing::Size(49, 48);
			   this->button9->TabIndex = 14;
			   this->button9->Text = L"9";
			   this->button9->UseVisualStyleBackColor = true;
			   this->button9->Click += gcnew System::EventHandler(this, &computerGame::button9_Click);
			   // 
			   // label5
			   // 
			   this->label5->BackColor = System::Drawing::Color::White;
			   this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label5->ForeColor = System::Drawing::Color::Black;
			   this->label5->Location = System::Drawing::Point(451, 23);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(233, 43);
			   this->label5->TabIndex = 15;
			   this->label5->Text = L"CONTADOR";
			   this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			   this->label5->Click += gcnew System::EventHandler(this, &computerGame::label5_Click);
			   // 
			   // exit
			   // 
			   this->exit->BackColor = System::Drawing::Color::Red;
			   this->exit->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->exit->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->exit->ForeColor = System::Drawing::Color::Black;
			   this->exit->Location = System::Drawing::Point(496, 565);
			   this->exit->Name = L"exit";
			   this->exit->Size = System::Drawing::Size(169, 58);
			   this->exit->TabIndex = 16;
			   this->exit->Text = L"SALIR";
			   this->exit->UseVisualStyleBackColor = false;
			   this->exit->Click += gcnew System::EventHandler(this, &computerGame::exit_Click_1);
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
			   this->label6->Location = System::Drawing::Point(540, 76);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(63, 33);
			   this->label6->TabIndex = 17;
			   this->label6->Text = L"0";
			   this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			   this->label6->Click += gcnew System::EventHandler(this, &computerGame::label6_Click);
			   // 
			   // button10
			   // 
			   this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->button10->FlatStyle = System::Windows::Forms::FlatStyle::System;
			   this->button10->Location = System::Drawing::Point(324, 491);
			   this->button10->Name = L"button10";
			   this->button10->Size = System::Drawing::Size(49, 48);
			   this->button10->TabIndex = 18;
			   this->button10->Text = L"10";
			   this->button10->UseVisualStyleBackColor = true;
			   this->button10->Click += gcnew System::EventHandler(this, &computerGame::button10_Click);
			   // 
			   // computerGame
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			   this->ClientSize = System::Drawing::Size(696, 656);
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
			   this->Name = L"computerGame";
			   this->Text = L"computerGame";
			   this->Load += gcnew System::EventHandler(this, &computerGame::computerGame_Load);
			   this->ResumeLayout(false);

		   }
#pragma endregion
	private: System::Void computerGame_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (turn) {
			turn = false;
			uint8_t adder = 1;
			uint8_t actualCounter = this->counter;
			this->counter = updateCounter(&actualCounter, &adder);
			this->label6->Text = this->counter.ToString();
			computerTurn();
		}
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void exit_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if(turn){
			turn = false;
			uint8_t adder = 2;
			uint8_t actualCounter = this->counter;
			this->counter = updateCounter(&actualCounter, &adder);
			this->label6->Text = this->counter.ToString();
			computerTurn();
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (turn) {
			turn = false;
			uint8_t adder = 3;
			uint8_t actualCounter = this->counter;
			this->counter = updateCounter(&actualCounter, &adder);
			this->label6->Text = this->counter.ToString();
			computerTurn();
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (turn) {
			turn = false;
			uint8_t adder = 4;
			uint8_t actualCounter = this->counter;
			this->counter = updateCounter(&actualCounter, &adder);
			this->label6->Text = this->counter.ToString();
			computerTurn();
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (turn) {
			turn = false;
			uint8_t adder = 5;
			uint8_t actualCounter = this->counter;
			this->counter = updateCounter(&actualCounter, &adder);
			this->label6->Text = this->counter.ToString();
			computerTurn();
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (turn) {
			turn = false;
			uint8_t adder = 6;
			uint8_t actualCounter = this->counter;
			this->counter = updateCounter(&actualCounter, &adder);
			this->label6->Text = this->counter.ToString();
			computerTurn();
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (turn) {
			turn = false;
			uint8_t adder = 7;
			uint8_t actualCounter = this->counter;
			this->counter = updateCounter(&actualCounter, &adder);
			this->label6->Text = this->counter.ToString();
			computerTurn();
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (turn) {
			turn = false;
			uint8_t adder = 8;
			uint8_t actualCounter = this->counter;
			this->counter = updateCounter(&actualCounter, &adder);
			this->label6->Text = this->counter.ToString();
			computerTurn();
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (turn) {
			turn = false;
			uint8_t adder = 9;
			uint8_t actualCounter = this->counter;
			this->counter = updateCounter(&actualCounter, &adder);
			this->label6->Text = this->counter.ToString();
			computerTurn();
		}
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (turn) {
			turn = false;
			uint8_t adder = 10;
			uint8_t actualCounter = this->counter;
			this->counter = updateCounter(&actualCounter, &adder);
			this->label6->Text = this->counter.ToString();
			computerTurn();
		}
	}
	};
}
	