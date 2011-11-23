
package net.nawia.gsao.content.model.monster;

import java.util.ArrayList;
import java.util.List;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="summons">
 *   &lt;xs:complexType>
 *     &lt;xs:sequence>
 *       &lt;xs:element ref="summon" maxOccurs="unbounded"/>
 *       &lt;xs:element ref="attribute" minOccurs="0"/>
 *     &lt;/xs:sequence>
 *     &lt;xs:attribute type="xs:string" use="required" name="maxSummons"/>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Summons
{
    private List<Summon> summonList = new ArrayList<Summon>();
    private Attribute attribute;
    private String maxSummons;

    /** 
     * Get the list of 'summon' element items.
     * 
     * @return list
     */
    public List<Summon> getSummonList() {
        return summonList;
    }

    /** 
     * Set the list of 'summon' element items.
     * 
     * @param list
     */
    public void setSummonList(List<Summon> list) {
        summonList = list;
    }

    /** 
     * Get the 'attribute' element value.
     * 
     * @return value
     */
    public Attribute getAttribute() {
        return attribute;
    }

    /** 
     * Set the 'attribute' element value.
     * 
     * @param attribute
     */
    public void setAttribute(Attribute attribute) {
        this.attribute = attribute;
    }

    /** 
     * Get the 'maxSummons' attribute value.
     * 
     * @return value
     */
    public String getMaxSummons() {
        return maxSummons;
    }

    /** 
     * Set the 'maxSummons' attribute value.
     * 
     * @param maxSummons
     */
    public void setMaxSummons(String maxSummons) {
        this.maxSummons = maxSummons;
    }
}
