#include "pch.h"
#include "stdafx.h"
#include "namespaces.h"
#include "MyForm.h"

namespace RevitAddin
{
    [Transaction(TransactionMode::Manual)]
    [Regeneration(RegenerationOption::Manual)]
    public ref class ExtCmd : IExternalCommand
    {
#pragma region Cached Variables
    private:
        static ExternalCommandData^ _cachedCmdData;

    public:
        static property UIApplication^ CachedUiApp
        {
            UIApplication^ get()
            {
                return _cachedCmdData->Application;
            }
        }
        static property RvtAppSrv::Application^ CachedApp
        {
            RvtAppSrv::Application^ get()
            {
                return CachedUiApp->Application;
            }
        }
        static property RvtDB::Document^ CachedDoc
        {
            RvtDB::Document^ get()
            {
                return CachedUiApp->ActiveUIDocument->Document;
            }
        }
#pragma endregion

#pragma region IExternalCommand Members
    public:
        virtual Result Execute(ExternalCommandData^ cmdData, String^% msg, ElementSet^ elemSet)
        {
            _cachedCmdData = cmdData;
            try
            {
                //TODO: add your code below.
                MyForm^ newform = gcnew MyForm();
                String^ uiapp =ExtCmd::CachedUiApp->ActiveUIDocument;
                String^ app = ExtCmd::CachedApp->Documents;
                String^ yol= ExtCmd::CachedDoc->PathName;
                newform->Activate();
//                newform->checkedListBox1->Items[0] = CachedDoc;
                newform->ShowDialog();
                System::Windows::Forms::MessageBox::Show(yol);
                return Result::Succeeded;
            }
            catch (System::Exception^ ex)
            {
                msg = ex->ToString();
                return Result::Failed;
            }
            return Result::Succeeded;
        }
#pragma endregion
    };
}