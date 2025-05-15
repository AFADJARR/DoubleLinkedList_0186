int main()
{
    DoubleLinkedList list;
    char choice;

    do
    {
        cout << "\nMenu\n";
        cout << " 1. Add Reccoed\n";
        cout << " 2. Delete Reccoed\n";
        cout << " 3. View Accending\n";
        cout << " 4. View Desscending\n";
        cout << " 5. Search Reccoed\n";
        cout << " 6. Exit\n";
        cout << "Enter Your Chooise: ";

        cin >> choice;

        switch (choice)
        {
            case '1':
                list.addNode();
                break;
            case '2':
                list.hapus();
                break;
            case '3':
                list.traverse();
                break;
            case '4':
                list.retraverse();
                break;
            case '5':
                list.searchData();
                break;
            case '6':
                return 0;
            default:
            cout << "Invalid option\n";
        }
        cout << "\nPress Enter to continue...";
        cin.ignore();
        cin.get();
        cout << endl;
        system("clear");
    } while (choice != '8');
}
