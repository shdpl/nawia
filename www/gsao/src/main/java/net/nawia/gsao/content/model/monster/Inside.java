
package net.nawia.gsao.content.model.monster;

import java.util.ArrayList;
import java.util.List;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="inside">
 *   &lt;xs:complexType mixed="true">
 *     &lt;xs:sequence>
 *       &lt;xs:element ref="item" maxOccurs="unbounded"/>
 *     &lt;/xs:sequence>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Inside
{
    private List<Item> itemList = new ArrayList<Item>();

    /** 
     * Get the list of 'item' element items.
     * 
     * @return list
     */
    public List<Item> getItemList() {
        return itemList;
    }

    /** 
     * Set the list of 'item' element items.
     * 
     * @param list
     */
    public void setItemList(List<Item> list) {
        itemList = list;
    }
}
