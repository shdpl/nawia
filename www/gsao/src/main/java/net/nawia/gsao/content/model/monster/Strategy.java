
package net.nawia.gsao.content.model.monster;

import java.math.BigInteger;

/** 
 * Deprecated.
 * 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="strategy">
 *   &lt;xs:complexType>
 *     &lt;xs:attribute type="xs:integer" name="attack"/>
 *     &lt;xs:attribute type="xs:integer" name="defense"/>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Strategy
{
    private BigInteger attack;
    private BigInteger defense;

    /** 
     * Get the 'attack' attribute value. Deprecated.
     * 
     * @return value
     */
    public BigInteger getAttack() {
        return attack;
    }

    /** 
     * Set the 'attack' attribute value. Deprecated.
     * 
     * @param attack
     */
    public void setAttack(BigInteger attack) {
        this.attack = attack;
    }

    /** 
     * Get the 'defense' attribute value. Deprecated.
     * 
     * @return value
     */
    public BigInteger getDefense() {
        return defense;
    }

    /** 
     * Set the 'defense' attribute value. Deprecated.
     * 
     * @param defense
     */
    public void setDefense(BigInteger defense) {
        this.defense = defense;
    }
}
