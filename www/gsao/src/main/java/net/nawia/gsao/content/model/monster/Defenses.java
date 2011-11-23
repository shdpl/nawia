
package net.nawia.gsao.content.model.monster;

import java.math.BigInteger;
import java.util.ArrayList;
import java.util.List;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="defenses">
 *   &lt;xs:complexType mixed="true">
 *     &lt;xs:sequence>
 *       &lt;xs:element ref="defense" minOccurs="0" maxOccurs="unbounded"/>
 *     &lt;/xs:sequence>
 *     &lt;xs:attribute type="xs:integer" name="defense"/>
 *     &lt;xs:attribute type="xs:integer" name="armor"/>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Defenses
{
    private List<Defense> defenseList = new ArrayList<Defense>();
    private BigInteger defense;
    private BigInteger armor;

    /** 
     * Get the list of 'defense' element items.
     * 
     * @return list
     */
    public List<Defense> getDefenseList() {
        return defenseList;
    }

    /** 
     * Set the list of 'defense' element items.
     * 
     * @param list
     */
    public void setDefenseList(List<Defense> list) {
        defenseList = list;
    }

    /** 
     * Get the 'defense' attribute value.
     * 
     * @return value
     */
    public BigInteger getDefense() {
        return defense;
    }

    /** 
     * Set the 'defense' attribute value.
     * 
     * @param defense
     */
    public void setDefense(BigInteger defense) {
        this.defense = defense;
    }

    /** 
     * Get the 'armor' attribute value.
     * 
     * @return value
     */
    public BigInteger getArmor() {
        return armor;
    }

    /** 
     * Set the 'armor' attribute value.
     * 
     * @param armor
     */
    public void setArmor(BigInteger armor) {
        this.armor = armor;
    }
}
