
package net.nawia.gsao.content.model.monster;

import java.util.ArrayList;
import java.util.List;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="attacks">
 *   &lt;xs:complexType mixed="true">
 *     &lt;xs:sequence minOccurs="0">
 *       &lt;!-- Reference to inner class AttacksInner -->
 *     &lt;/xs:sequence>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Attacks
{
    private AttacksInner attacks;

    /** 
     * Get the 'attacks' element value.
     * 
     * @return value
     */
    public AttacksInner getAttacks() {
        return attacks;
    }

    /** 
     * Set the 'attacks' element value.
     * 
     * @param attacks
     */
    public void setAttacks(AttacksInner attacks) {
        this.attacks = attacks;
    }
    /** 
     * Schema fragment(s) for this class:
     * <pre>
     * &lt;xs:sequence xmlns:xs="http://www.w3.org/2001/XMLSchema" minOccurs="0">
     *   &lt;xs:element ref="attack" maxOccurs="unbounded"/>
     *   &lt;xs:element ref="defense" minOccurs="0"/>
     * &lt;/xs:sequence>
     * </pre>
     */
    public static class AttacksInner
    {
        private List<Attack> attackList = new ArrayList<Attack>();
        private Defense defense;

        /** 
         * Get the list of 'attack' element items.
         * 
         * @return list
         */
        public List<Attack> getAttackList() {
            return attackList;
        }

        /** 
         * Set the list of 'attack' element items.
         * 
         * @param list
         */
        public void setAttackList(List<Attack> list) {
            attackList = list;
        }

        /** 
         * Get the 'defense' element value.
         * 
         * @return value
         */
        public Defense getDefense() {
            return defense;
        }

        /** 
         * Set the 'defense' element value.
         * 
         * @param defense
         */
        public void setDefense(Defense defense) {
            this.defense = defense;
        }
    }
}
