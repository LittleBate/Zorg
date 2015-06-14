//ZorgItem.qml
import QtQuick 2.0
import Sailfish.Silica 1.0

ListItem{
    id: listeItem

    Row{
        Label{ text: index + " - " + titre}
    }

    menu: ContextMenu{
        MenuItem {
            text: "Supprimer"
            onClicked: remove()
        }
    }

    function remove(){
        remorseAction("Suppression", function(){
            view.model.removeRow(index)
        })
    }
}
