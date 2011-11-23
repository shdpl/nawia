
package net.nawia.gsao.content.model.monster;

import java.util.ArrayList;
import java.util.List;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="immunities">
 *   &lt;xs:complexType>
 *     &lt;xs:sequence>
 *       &lt;xs:element ref="immunity" maxOccurs="unbounded"/>
 *     &lt;/xs:sequence>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Immunities
{
    private List<Immunity> immunityList = new ArrayList<Immunity>();

    /** 
     * Get the list of 'immunity' element items.
     * 
     * @return list
     */
    public List<Immunity> getImmunityList() {
        return immunityList;
    }

    /** 
     * Set the list of 'immunity' element items.
     * 
     * @param list
     */
    public void setImmunityList(List<Immunity> list) {
        immunityList = list;
    }
}
