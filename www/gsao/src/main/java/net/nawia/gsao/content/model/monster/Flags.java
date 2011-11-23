
package net.nawia.gsao.content.model.monster;

import java.util.ArrayList;
import java.util.List;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="flags">
 *   &lt;xs:complexType>
 *     &lt;xs:sequence>
 *       &lt;xs:element ref="flag" maxOccurs="unbounded"/>
 *     &lt;/xs:sequence>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Flags
{
    private List<Flag> flagList = new ArrayList<Flag>();

    /** 
     * Get the list of 'flag' element items.
     * 
     * @return list
     */
    public List<Flag> getFlagList() {
        return flagList;
    }

    /** 
     * Set the list of 'flag' element items.
     * 
     * @param list
     */
    public void setFlagList(List<Flag> list) {
        flagList = list;
    }
}
