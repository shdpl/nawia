
package net.nawia.gsao.content.model.monster;

import java.util.ArrayList;
import java.util.List;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:ns="http://www.nawia.net/xsd/monsters-0.0.1.xsd" xmlns:xs="http://www.w3.org/2001/XMLSchema" name="monsters">
 *   &lt;xs:complexType>
 *     &lt;xs:sequence>
 *       &lt;xs:element name="monster" minOccurs="0" maxOccurs="unbounded">
 *         &lt;!-- Reference to inner class Monster -->
 *       &lt;/xs:element>
 *     &lt;/xs:sequence>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Monsters
{
    private List<Monster> monsterList = new ArrayList<Monster>();

    /** 
     * Get the list of 'monster' element items.
     * 
     * @return list
     */
    public List<Monster> getMonsterList() {
        return monsterList;
    }

    /** 
     * Set the list of 'monster' element items.
     * 
     * @param list
     */
    public void setMonsterList(List<Monster> list) {
        monsterList = list;
    }
    /** 
     * Schema fragment(s) for this class:
     * <pre>
     * &lt;xs:element xmlns:ns="http://www.nawia.net/xsd/monsters-0.0.1.xsd" xmlns:xs="http://www.w3.org/2001/XMLSchema" name="monster" minOccurs="0" maxOccurs="unbounded">
     *   &lt;xs:complexType>
     *     &lt;xs:attribute type="xs:string" name="name"/>
     *     &lt;xs:attribute type="xs:string" name="file"/>
     *   &lt;/xs:complexType>
     * &lt;/xs:element>
     * </pre>
     */
    public static class Monster
    {
        private String name;
        private String file;

        /** 
         * Get the 'name' attribute value.
         * 
         * @return value
         */
        public String getName() {
            return name;
        }

        /** 
         * Set the 'name' attribute value.
         * 
         * @param name
         */
        public void setName(String name) {
            this.name = name;
        }

        /** 
         * Get the 'file' attribute value.
         * 
         * @return value
         */
        public String getFile() {
            return file;
        }

        /** 
         * Set the 'file' attribute value.
         * 
         * @param file
         */
        public void setFile(String file) {
            this.file = file;
        }
    }
}
