
package net.nawia.gsao.content.model.monster;

import java.util.ArrayList;
import java.util.List;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="elements">
 *   &lt;xs:complexType>
 *     &lt;xs:sequence>
 *       &lt;xs:element ref="element" maxOccurs="unbounded"/>
 *     &lt;/xs:sequence>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Elements
{
    private List<Element> elementList = new ArrayList<Element>();

    /** 
     * Get the list of 'element' element items.
     * 
     * @return list
     */
    public List<Element> getElementList() {
        return elementList;
    }

    /** 
     * Set the list of 'element' element items.
     * 
     * @param list
     */
    public void setElementList(List<Element> list) {
        elementList = list;
    }
}
