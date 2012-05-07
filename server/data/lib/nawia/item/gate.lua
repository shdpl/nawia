Gate =
{
    itemIdClosed = {},
    itemIdOpen   = {},

    ---
    -- @param item1 left wing
    -- @param item2 right wing
    -- @param orientation current orientation
    -- @see NORTH
    getByItem = function(item1, item2, orientation)
        return
        {
            left_wing   = item1,
            right_wing  = item2,
            orientation = orientation
        }
    end;

    getByUID = function(uid1, uid2, orientation)
        return Gate.getByItem(Item.getByUID(uid1), Item.getByUID(uid2), orientation)
    end;

    isClosed = function(gate)
        return table.find(Gate.itemIdClosed[gate.orientation], gate.left_wing.itemid)
                or table.find(Gate.itemIdClosed[gate.orientation], gate.right_wing.itemid)
    end;

    doCloseLeftWing = function(gate)
        if gate.orientation == NORTH then
            Item.doTransformDec(gate.right_wing)
            Item.doTransformDec(gate.left_wing)
            Item.doMove(gate.left_wing, WEST)
        elseif gate.orientation == EAST then
            Item.doTransformInc(gate.right_wing)
            Item.doMove(gate.right_wing, EAST)
            Item.doTransformInc(gate.left_wing)
            Item.doMove(gate.left_wing, NORTH_EAST)
        elseif gate.orientation == SOUTH then
            Item.doTransformDec(gate.right_wing)
            Item.doMove(gate.right_wing, SOUTH_WEST)
            Item.doTransformDec(gate.left_wing)
            Item.doMove(gate.left_wing, SOUTH)
        elseif gate.orientation == WEST then
            Item.doTransformInc(gate.right_wing)
            Item.doMove(gate.right_wing, NORTH)
            Item.doTransformInc(gate.left_wing)
        end
    end;

    doCloseRightWing = function(gate)
        if gate.orientation == NORTH then
            Item.doTransformDec(gate.right_wing)
            Item.doTransformDec(gate.left_wing)
            Item.doMove(gate.left_wing, WEST)
        elseif gate.orientation == EAST then
            Item.doTransformInc(gate.right_wing)
            Item.doMove(gate.right_wing, EAST)
            Item.doTransformInc(gate.left_wing)
            Item.doMove(gate.left_wing, NORTH_EAST)
        elseif gate.orientation == SOUTH then
            Item.doTransformDec(gate.right_wing)
            Item.doMove(gate.right_wing, SOUTH_WEST)
            Item.doTransformDec(gate.left_wing)
            Item.doMove(gate.left_wing, SOUTH)
        elseif gate.orientation == WEST then
            Item.doTransformInc(gate.right_wing)
            Item.doMove(gate.right_wing, NORTH)
            Item.doTransformInc(gate.left_wing)
        end
    end;

    doClose = function(gate)
        if gate.orientation == NORTH then
            Item.doTransformDec(gate.right_wing)
            Item.doTransformDec(gate.left_wing)
            Item.doMove(gate.left_wing, WEST)
        elseif gate.orientation == EAST then
            Item.doTransformInc(gate.right_wing)
            Item.doMove(gate.right_wing, EAST)
            Item.doTransformInc(gate.left_wing)
            Item.doMove(gate.left_wing, NORTH_EAST)
        elseif gate.orientation == SOUTH then
            Item.doTransformDec(gate.right_wing)
            Item.doMove(gate.right_wing, SOUTH_WEST)
            Item.doTransformDec(gate.left_wing)
            Item.doMove(gate.left_wing, SOUTH)
        elseif gate.orientation == WEST then
            Item.doTransformInc(gate.right_wing)
            Item.doMove(gate.right_wing, NORTH)
            Item.doTransformInc(gate.left_wing)
        end
    end;

    isOpen = function(gate)
        return table.find(Gate.itemIdOpen[gate.orientation], gate.left_wing.itemid)
            or table.find(Gate.itemIdOpen[gate.orientation], gate.right_wing.itemid);
    end;

    doOpen = function(gate)
        if gate.orientation == NORTH then
            Item.doTransformInc(gate.right_wing)
            Item.doTransformInc(gate.left_wing)
            Item.doMove(gate.left_wing, EAST)
        elseif gate.orientation == EAST then
            Item.doTransformDec(gate.right_wing)
            Item.doMove(gate.right_wing, WEST)
            Item.doTransformDec(gate.left_wing)
            Item.doMove(gate.left_wing, SOUTH_WEST)
        elseif gate.orientation == SOUTH then
            Item.doTransformInc(gate.right_wing)
            Item.doMove(gate.right_wing, NORTH_EAST)
            Item.doTransformInc(gate.left_wing)
            Item.doMove(gate.left_wing, NORTH)
        elseif gate.orientation == WEST then
            Item.doTransformDec(gate.right_wing)
            Item.doMove(gate.right_wing, SOUTH)
            Item.doTransformDec(gate.left_wing)
        end
    end;

    doSwitch = function(gate)
        local open = Gate.isOpen(gate)
        if open then
            Gate.doOpen(gate)
            return true
        end
        local closed = Gate.isClosed(gate)
        if closed then
            Gate.doClose(gate)
            return true
        end
        print(open, closed)
        return false
    end;
}

Gate.itemIdClosed[NORTH]= {1547}
Gate.itemIdClosed[EAST] = {1546}
Gate.itemIdClosed[SOUTH]= {1547}
Gate.itemIdClosed[WEST] = {1546}

Gate.itemIdOpen[NORTH]  = {1546}
Gate.itemIdOpen[EAST]   = {1547}
Gate.itemIdOpen[SOUTH]  = {1546}
Gate.itemIdOpen[WEST]   = {1547}