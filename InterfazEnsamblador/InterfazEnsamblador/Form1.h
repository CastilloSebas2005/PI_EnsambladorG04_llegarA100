#pragma once

// uncomment to execute the rk1-utils:
//    #include "rk1_Utils_demo.h"  // shows how the rk1-utils can be used

#include <iostream>

#include "computerGame.h"
#include "playerGame.h"

namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for Form1
    /// </summary>
    public ref class Form1 : public System::Windows::Forms::Form
    {
    public:
        Form1(void)
        {
            InitializeComponent();
            //
            //TODO: Add the constructor code here
            //

            // uncomment to execute the rk1-utils:
            //    N_rk1_Utils_demo::execute(); // shows how the rk1-utils can be used

        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~Form1()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ playerMode;
    private: System::Windows::Forms::Button^ computerMode;


    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button4;
    protected:

    protected:

    protected:

    protected:

    protected:

    protected:





    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->playerMode = (gcnew System::Windows::Forms::Button());
            this->computerMode = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
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
            this->label1->Location = System::Drawing::Point(227, 51);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(391, 55);
            this->label1->TabIndex = 0;
            this->label1->Text = L"LLEGAR A 100";
            this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click_1);
            // 
            // playerMode
            // 
            this->playerMode->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->playerMode->Cursor = System::Windows::Forms::Cursors::Hand;
            this->playerMode->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->playerMode->ForeColor = System::Drawing::Color::Black;
            this->playerMode->Location = System::Drawing::Point(108, 202);
            this->playerMode->Name = L"playerMode";
            this->playerMode->Size = System::Drawing::Size(282, 67);
            this->playerMode->TabIndex = 1;
            this->playerMode->Text = L"vs JUGADOR";
            this->playerMode->UseVisualStyleBackColor = false;
            this->playerMode->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
            // 
            // computerMode
            // 
            this->computerMode->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->computerMode->Cursor = System::Windows::Forms::Cursors::Hand;
            this->computerMode->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->computerMode->ForeColor = System::Drawing::Color::Black;
            this->computerMode->Location = System::Drawing::Point(468, 202);
            this->computerMode->Name = L"computerMode";
            this->computerMode->Size = System::Drawing::Size(284, 67);
            this->computerMode->TabIndex = 2;
            this->computerMode->Text = L"vs COMPUTADORA";
            this->computerMode->UseVisualStyleBackColor = false;
            this->computerMode->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::Green;
            this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::Color::Black;
            this->button3->Location = System::Drawing::Point(25, 483);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(169, 58);
            this->button3->TabIndex = 3;
            this->button3->Text = L"MANUAL";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::Red;
            this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->ForeColor = System::Drawing::Color::Black;
            this->button4->Location = System::Drawing::Point(648, 483);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(169, 58);
            this->button4->TabIndex = 4;
            this->button4->Text = L"SALIR";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::WindowFrame;
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->ClientSize = System::Drawing::Size(843, 568);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->computerMode);
            this->Controls->Add(this->playerMode);
            this->Controls->Add(this->label1);
            this->Name = L"Form1";
            this->Text = L"Menu";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            this->ResumeLayout(false);

        }
#pragma endregion

        // You can call the functions at a button click. If you prefer, 
         // you can call them by clicking a menu item.


    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

    }
    private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		InterfazEnsamblador::playerGame^ form = gcnew InterfazEnsamblador::playerGame();
		form->Show();
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        InterfazEnsamblador::computerGame^ form = gcnew InterfazEnsamblador::computerGame();
        form->Show();
    }
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
        exit(0);
    }
    }; // end of class Form1
} // end of namespace CppCLRWinFormsProject

