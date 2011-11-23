
package net.nawia.gsao.content.model.monster;

import java.math.BigInteger;

/** 
 * Schema fragment(s) for this class:
 * <pre>
 * &lt;xs:element xmlns:xs="http://www.w3.org/2001/XMLSchema" name="monster">
 *   &lt;xs:complexType mixed="true">
 *     &lt;xs:sequence>
 *       &lt;xs:element ref="health"/>
 *       &lt;xs:choice>
 *         &lt;xs:sequence>
 *           &lt;xs:element ref="strategy"/>
 *           &lt;xs:element ref="targetchange"/>
 *           &lt;xs:element ref="look"/>
 *           &lt;xs:element ref="flags"/>
 *           &lt;xs:element ref="attacks"/>
 *           &lt;xs:element ref="defenses"/>
 *           &lt;xs:element ref="elements"/>
 *           &lt;xs:element ref="immunities"/>
 *           &lt;xs:sequence minOccurs="0">
 *             &lt;!-- Reference to inner class Sequence -->
 *           &lt;/xs:sequence>
 *         &lt;/xs:sequence>
 *         &lt;xs:sequence>
 *           &lt;xs:element ref="look"/>
 *           &lt;xs:choice>
 *             &lt;xs:sequence>
 *               &lt;xs:element ref="targetchange"/>
 *               &lt;xs:choice>
 *                 &lt;xs:sequence>
 *                   &lt;xs:element ref="strategy"/>
 *                   &lt;xs:element ref="flags"/>
 *                   &lt;xs:choice>
 *                     &lt;xs:sequence>
 *                       &lt;xs:element ref="script"/>
 *                       &lt;xs:element ref="attacks"/>
 *                       &lt;xs:element ref="defenses"/>
 *                       &lt;xs:element ref="elements"/>
 *                       &lt;xs:element ref="immunities"/>
 *                       &lt;xs:element ref="summons"/>
 *                       &lt;xs:element ref="voices"/>
 *                     &lt;/xs:sequence>
 *                     &lt;xs:sequence>
 *                       &lt;xs:element ref="defenses"/>
 *                       &lt;xs:choice minOccurs="0">
 *                         &lt;!-- Reference to inner class Choice -->
 *                       &lt;/xs:choice>
 *                     &lt;/xs:sequence>
 *                     &lt;xs:sequence>
 *                       &lt;xs:element ref="attacks"/>
 *                       &lt;xs:choice>
 *                         &lt;xs:sequence>
 *                           &lt;xs:element ref="elements"/>
 *                           &lt;xs:choice>
 *                             &lt;xs:sequence>
 *                               &lt;!-- Reference to inner class Sequence1 -->
 *                             &lt;/xs:sequence>
 *                             &lt;xs:sequence>
 *                               &lt;xs:element ref="voices"/>
 *                               &lt;xs:element ref="defenses"/>
 *                             &lt;/xs:sequence>
 *                           &lt;/xs:choice>
 *                         &lt;/xs:sequence>
 *                         &lt;xs:sequence>
 *                           &lt;xs:element ref="defenses"/>
 *                           &lt;xs:choice>
 *                             &lt;xs:element ref="loot"/>
 *                             &lt;xs:sequence>
 *                               &lt;xs:element ref="voices"/>
 *                               &lt;xs:sequence minOccurs="0">
 *                                 &lt;!-- Reference to inner class Sequence2 -->
 *                               &lt;/xs:sequence>
 *                               &lt;xs:element ref="loot"/>
 *                             &lt;/xs:sequence>
 *                             &lt;xs:sequence>
 *                               &lt;xs:element ref="summons"/>
 *                               &lt;xs:sequence minOccurs="0">
 *                                 &lt;!-- Reference to inner class Sequence3 -->
 *                               &lt;/xs:sequence>
 *                               &lt;xs:element ref="voices"/>
 *                               &lt;xs:element ref="loot"/>
 *                             &lt;/xs:sequence>
 *                             &lt;xs:sequence>
 *                               &lt;xs:element ref="immunities"/>
 *                               &lt;xs:choice minOccurs="0">
 *                                 &lt;!-- Reference to inner class Choice1 -->
 *                               &lt;/xs:choice>
 *                             &lt;/xs:sequence>
 *                             &lt;xs:sequence>
 *                               &lt;xs:element ref="elements"/>
 *                               &lt;xs:choice minOccurs="0">
 *                                 &lt;!-- Reference to inner class Choice2 -->
 *                               &lt;/xs:choice>
 *                             &lt;/xs:sequence>
 *                           &lt;/xs:choice>
 *                         &lt;/xs:sequence>
 *                       &lt;/xs:choice>
 *                     &lt;/xs:sequence>
 *                   &lt;/xs:choice>
 *                 &lt;/xs:sequence>
 *                 &lt;xs:sequence>
 *                   &lt;xs:element ref="flags"/>
 *                   &lt;xs:element ref="attacks"/>
 *                   &lt;xs:element ref="defenses"/>
 *                   &lt;xs:element ref="elements"/>
 *                   &lt;xs:element ref="voices"/>
 *                   &lt;xs:element ref="loot"/>
 *                 &lt;/xs:sequence>
 *               &lt;/xs:choice>
 *             &lt;/xs:sequence>
 *             &lt;xs:sequence>
 *               &lt;xs:element ref="strategy"/>
 *               &lt;xs:element ref="flags"/>
 *               &lt;xs:element ref="attacks"/>
 *               &lt;xs:choice>
 *                 &lt;xs:sequence>
 *                   &lt;xs:element ref="elements"/>
 *                   &lt;xs:element ref="defenses"/>
 *                 &lt;/xs:sequence>
 *                 &lt;xs:sequence>
 *                   &lt;xs:element ref="defenses"/>
 *                   &lt;xs:element ref="elements"/>
 *                   &lt;xs:choice minOccurs="0">
 *                     &lt;!-- Reference to inner class Choice3 -->
 *                   &lt;/xs:choice>
 *                 &lt;/xs:sequence>
 *               &lt;/xs:choice>
 *             &lt;/xs:sequence>
 *           &lt;/xs:choice>
 *         &lt;/xs:sequence>
 *       &lt;/xs:choice>
 *     &lt;/xs:sequence>
 *     &lt;xs:attribute type="xs:integer" use="required" name="speed"/>
 *     &lt;xs:attribute use="required" name="race">
 *       &lt;xs:simpleType>
 *         &lt;!-- Reference to inner class Race -->
 *       &lt;/xs:simpleType>
 *     &lt;/xs:attribute>
 *     &lt;xs:attribute type="xs:string" name="namedescription"/>
 *     &lt;xs:attribute type="xs:string" name="nameDescription"/>
 *     &lt;xs:attribute type="xs:string" use="required" name="name"/>
 *     &lt;xs:attribute type="xs:integer" name="manacost"/>
 *     &lt;xs:attribute type="xs:integer" use="required" name="experience"/>
 *   &lt;/xs:complexType>
 * &lt;/xs:element>
 * </pre>
 */
public class Monster
{
    private Health health;
    private int choiceSelect = -1;
    private static final int STRATEGY_CHOICE = 0;
    private static final int LOOK_CHOICE = 1;
    private Strategy strategy;
    private Targetchange targetchange;
    private Look look;
    private Flags flags;
    private Attacks attacks;
    private Defenses defenses;
    private Elements elements;
    private Immunities immunities;
    private Sequence sequence;
    private Look look1;
    private int choiceSelect1 = -1;
    private static final int TARGETCHANGE_CHOICE = 0;
    private static final int STRATEGY2_CHOICE = 1;
    private Targetchange targetchange1;
    private int choiceSelect2 = -1;
    private static final int STRATEGY1_CHOICE = 0;
    private static final int FLAGS_CHOICE = 1;
    private Strategy strategy1;
    private Flags flags1;
    private int choiceSelect3 = -1;
    private static final int SCRIPT_CHOICE = 0;
    private static final int DEFENSES_CHOICE = 1;
    private static final int ATTACKS_CHOICE = 2;
    private Script script;
    private Attacks attacks1;
    private Defenses defenses1;
    private Elements elements1;
    private Immunities immunities1;
    private Summons summons;
    private Voices voices;
    private Defenses defenses2;
    private Choice choice;
    private Attacks attacks2;
    private int choiceSelect4 = -1;
    private static final int ELEMENTS_CHOICE = 0;
    private static final int DEFENSES1_CHOICE = 1;
    private Elements elements2;
    private int choiceSelect5 = -1;
    private static final int SEQUENCE_CHOICE = 0;
    private static final int VOICES_CHOICE = 1;
    private Sequence1 sequence1;
    private Voices voices1;
    private Defenses defenses3;
    private Defenses defenses4;
    private int choiceSelect6 = -1;
    private static final int LOOT_CHOICE = 0;
    private static final int VOICES1_CHOICE = 1;
    private static final int SUMMONS_CHOICE = 2;
    private static final int IMMUNITIES_CHOICE = 3;
    private static final int ELEMENTS1_CHOICE = 4;
    private Loot loot;
    private Voices voices2;
    private Sequence2 sequence2;
    private Loot loot1;
    private Summons summons1;
    private Sequence3 sequence3;
    private Voices voices3;
    private Loot loot2;
    private Immunities immunities2;
    private Choice1 choice1;
    private Elements elements3;
    private Choice2 choice2;
    private Flags flags2;
    private Attacks attacks3;
    private Defenses defenses5;
    private Elements elements4;
    private Voices voices4;
    private Loot loot3;
    private Strategy strategy2;
    private Flags flags3;
    private Attacks attacks4;
    private int choiceSelect7 = -1;
    private static final int ELEMENTS2_CHOICE = 0;
    private static final int DEFENSES2_CHOICE = 1;
    private Elements elements5;
    private Defenses defenses6;
    private Defenses defenses7;
    private Elements elements6;
    private Choice3 choice3;
    private BigInteger speed;
    private Race race;
    private String namedescription;
    private String nameDescription;
    private String name;
    private BigInteger manacost;
    private BigInteger experience;

    /** 
     * Get the 'health' element value.
     * 
     * @return value
     */
    public Health getHealth() {
        return health;
    }

    /** 
     * Set the 'health' element value.
     * 
     * @param health
     */
    public void setHealth(Health health) {
        this.health = health;
    }

    private void setChoiceSelect(int choice) {
        if (choiceSelect == -1) {
            choiceSelect = choice;
        } else if (choiceSelect != choice) {
            throw new IllegalStateException(
                    "Need to call clearChoiceSelect() before changing existing choice");
        }
    }

    /** 
     * Clear the choice selection.
     */
    public void clearChoiceSelect() {
        choiceSelect = -1;
    }

    /** 
     * Check if Strategy is current selection for choice.
     * 
     * @return <code>true</code> if selection, <code>false</code> if not
     */
    public boolean ifStrategy() {
        return choiceSelect == STRATEGY_CHOICE;
    }

    /** 
     * Get the 'strategy' element value.
     * 
     * @return value
     */
    public Strategy getStrategy() {
        return strategy;
    }

    /** 
     * Set the 'strategy' element value.
     * 
     * @param strategy
     */
    public void setStrategy(Strategy strategy) {
        setChoiceSelect(STRATEGY_CHOICE);
        this.strategy = strategy;
    }

    /** 
     * Get the 'targetchange' element value.
     * 
     * @return value
     */
    public Targetchange getTargetchange() {
        return targetchange;
    }

    /** 
     * Set the 'targetchange' element value.
     * 
     * @param targetchange
     */
    public void setTargetchange(Targetchange targetchange) {
        setChoiceSelect(STRATEGY_CHOICE);
        this.targetchange = targetchange;
    }

    /** 
     * Get the 'look' element value.
     * 
     * @return value
     */
    public Look getLook() {
        return look;
    }

    /** 
     * Set the 'look' element value.
     * 
     * @param look
     */
    public void setLook(Look look) {
        setChoiceSelect(STRATEGY_CHOICE);
        this.look = look;
    }

    /** 
     * Get the 'flags' element value.
     * 
     * @return value
     */
    public Flags getFlags() {
        return flags;
    }

    /** 
     * Set the 'flags' element value.
     * 
     * @param flags
     */
    public void setFlags(Flags flags) {
        setChoiceSelect(STRATEGY_CHOICE);
        this.flags = flags;
    }

    /** 
     * Get the 'attacks' element value.
     * 
     * @return value
     */
    public Attacks getAttacks() {
        return attacks;
    }

    /** 
     * Set the 'attacks' element value.
     * 
     * @param attacks
     */
    public void setAttacks(Attacks attacks) {
        setChoiceSelect(STRATEGY_CHOICE);
        this.attacks = attacks;
    }

    /** 
     * Get the 'defenses' element value.
     * 
     * @return value
     */
    public Defenses getDefenses() {
        return defenses;
    }

    /** 
     * Set the 'defenses' element value.
     * 
     * @param defenses
     */
    public void setDefenses(Defenses defenses) {
        setChoiceSelect(STRATEGY_CHOICE);
        this.defenses = defenses;
    }

    /** 
     * Get the 'elements' element value.
     * 
     * @return value
     */
    public Elements getElements() {
        return elements;
    }

    /** 
     * Set the 'elements' element value.
     * 
     * @param elements
     */
    public void setElements(Elements elements) {
        setChoiceSelect(STRATEGY_CHOICE);
        this.elements = elements;
    }

    /** 
     * Get the 'immunities' element value.
     * 
     * @return value
     */
    public Immunities getImmunities() {
        return immunities;
    }

    /** 
     * Set the 'immunities' element value.
     * 
     * @param immunities
     */
    public void setImmunities(Immunities immunities) {
        setChoiceSelect(STRATEGY_CHOICE);
        this.immunities = immunities;
    }

    /** 
     * Get the sequence value.
     * 
     * @return value
     */
    public Sequence getSequence() {
        return sequence;
    }

    /** 
     * Set the sequence value.
     * 
     * @param sequence
     */
    public void setSequence(Sequence sequence) {
        setChoiceSelect(STRATEGY_CHOICE);
        this.sequence = sequence;
    }

    /** 
     * Check if Look is current selection for choice.
     * 
     * @return <code>true</code> if selection, <code>false</code> if not
     */
    public boolean ifLook() {
        return choiceSelect == LOOK_CHOICE;
    }

    /** 
     * Get the 'look' element value.
     * 
     * @return value
     */
    public Look getLook1() {
        return look1;
    }

    /** 
     * Set the 'look' element value.
     * 
     * @param look1
     */
    public void setLook1(Look look1) {
        setChoiceSelect(LOOK_CHOICE);
        this.look1 = look1;
    }

    private void setChoiceSelect1(int choice) {
        setChoiceSelect(LOOK_CHOICE);
        if (choiceSelect1 == -1) {
            choiceSelect1 = choice;
        } else if (choiceSelect1 != choice) {
            throw new IllegalStateException(
                    "Need to call clearChoiceSelect1() before changing existing choice");
        }
    }

    /** 
     * Clear the choice selection.
     */
    public void clearChoiceSelect1() {
        choiceSelect1 = -1;
    }

    /** 
     * Check if Targetchange is current selection for choice.
     * 
     * @return <code>true</code> if selection, <code>false</code> if not
     */
    public boolean ifTargetchange() {
        return choiceSelect1 == TARGETCHANGE_CHOICE;
    }

    /** 
     * Get the 'targetchange' element value.
     * 
     * @return value
     */
    public Targetchange getTargetchange1() {
        return targetchange1;
    }

    /** 
     * Set the 'targetchange' element value.
     * 
     * @param targetchange1
     */
    public void setTargetchange1(Targetchange targetchange1) {
        setChoiceSelect1(TARGETCHANGE_CHOICE);
        this.targetchange1 = targetchange1;
    }

    private void setChoiceSelect2(int choice) {
        setChoiceSelect1(TARGETCHANGE_CHOICE);
        if (choiceSelect2 == -1) {
            choiceSelect2 = choice;
        } else if (choiceSelect2 != choice) {
            throw new IllegalStateException(
                    "Need to call clearChoiceSelect2() before changing existing choice");
        }
    }

    /** 
     * Clear the choice selection.
     */
    public void clearChoiceSelect2() {
        choiceSelect2 = -1;
    }

    /** 
     * Check if Strategy is current selection for choice.
     * 
     * @return <code>true</code> if selection, <code>false</code> if not
     */
    public boolean ifStrategy1() {
        return choiceSelect2 == STRATEGY1_CHOICE;
    }

    /** 
     * Get the 'strategy' element value.
     * 
     * @return value
     */
    public Strategy getStrategy1() {
        return strategy1;
    }

    /** 
     * Set the 'strategy' element value.
     * 
     * @param strategy1
     */
    public void setStrategy1(Strategy strategy1) {
        setChoiceSelect2(STRATEGY1_CHOICE);
        this.strategy1 = strategy1;
    }

    /** 
     * Get the 'flags' element value.
     * 
     * @return value
     */
    public Flags getFlags1() {
        return flags1;
    }

    /** 
     * Set the 'flags' element value.
     * 
     * @param flags1
     */
    public void setFlags1(Flags flags1) {
        setChoiceSelect2(STRATEGY1_CHOICE);
        this.flags1 = flags1;
    }

    private void setChoiceSelect3(int choice) {
        setChoiceSelect2(STRATEGY1_CHOICE);
        if (choiceSelect3 == -1) {
            choiceSelect3 = choice;
        } else if (choiceSelect3 != choice) {
            throw new IllegalStateException(
                    "Need to call clearChoiceSelect3() before changing existing choice");
        }
    }

    /** 
     * Clear the choice selection.
     */
    public void clearChoiceSelect3() {
        choiceSelect3 = -1;
    }

    /** 
     * Check if Script is current selection for choice.
     * 
     * @return <code>true</code> if selection, <code>false</code> if not
     */
    public boolean ifScript() {
        return choiceSelect3 == SCRIPT_CHOICE;
    }

    /** 
     * Get the 'script' element value.
     * 
     * @return value
     */
    public Script getScript() {
        return script;
    }

    /** 
     * Set the 'script' element value.
     * 
     * @param script
     */
    public void setScript(Script script) {
        setChoiceSelect3(SCRIPT_CHOICE);
        this.script = script;
    }

    /** 
     * Get the 'attacks' element value.
     * 
     * @return value
     */
    public Attacks getAttacks1() {
        return attacks1;
    }

    /** 
     * Set the 'attacks' element value.
     * 
     * @param attacks1
     */
    public void setAttacks1(Attacks attacks1) {
        setChoiceSelect3(SCRIPT_CHOICE);
        this.attacks1 = attacks1;
    }

    /** 
     * Get the 'defenses' element value.
     * 
     * @return value
     */
    public Defenses getDefenses1() {
        return defenses1;
    }

    /** 
     * Set the 'defenses' element value.
     * 
     * @param defenses1
     */
    public void setDefenses1(Defenses defenses1) {
        setChoiceSelect3(SCRIPT_CHOICE);
        this.defenses1 = defenses1;
    }

    /** 
     * Get the 'elements' element value.
     * 
     * @return value
     */
    public Elements getElements1() {
        return elements1;
    }

    /** 
     * Set the 'elements' element value.
     * 
     * @param elements1
     */
    public void setElements1(Elements elements1) {
        setChoiceSelect3(SCRIPT_CHOICE);
        this.elements1 = elements1;
    }

    /** 
     * Get the 'immunities' element value.
     * 
     * @return value
     */
    public Immunities getImmunities1() {
        return immunities1;
    }

    /** 
     * Set the 'immunities' element value.
     * 
     * @param immunities1
     */
    public void setImmunities1(Immunities immunities1) {
        setChoiceSelect3(SCRIPT_CHOICE);
        this.immunities1 = immunities1;
    }

    /** 
     * Get the 'summons' element value.
     * 
     * @return value
     */
    public Summons getSummons() {
        return summons;
    }

    /** 
     * Set the 'summons' element value.
     * 
     * @param summons
     */
    public void setSummons(Summons summons) {
        setChoiceSelect3(SCRIPT_CHOICE);
        this.summons = summons;
    }

    /** 
     * Get the 'voices' element value.
     * 
     * @return value
     */
    public Voices getVoices() {
        return voices;
    }

    /** 
     * Set the 'voices' element value.
     * 
     * @param voices
     */
    public void setVoices(Voices voices) {
        setChoiceSelect3(SCRIPT_CHOICE);
        this.voices = voices;
    }

    /** 
     * Check if Defenses is current selection for choice.
     * 
     * @return <code>true</code> if selection, <code>false</code> if not
     */
    public boolean ifDefenses() {
        return choiceSelect3 == DEFENSES_CHOICE;
    }

    /** 
     * Get the 'defenses' element value.
     * 
     * @return value
     */
    public Defenses getDefenses2() {
        return defenses2;
    }

    /** 
     * Set the 'defenses' element value.
     * 
     * @param defenses2
     */
    public void setDefenses2(Defenses defenses2) {
        setChoiceSelect3(DEFENSES_CHOICE);
        this.defenses2 = defenses2;
    }

    /** 
     * Get the choice value.
     * 
     * @return value
     */
    public Choice getChoice() {
        return choice;
    }

    /** 
     * Set the choice value.
     * 
     * @param choice
     */
    public void setChoice(Choice choice) {
        setChoiceSelect3(DEFENSES_CHOICE);
        this.choice = choice;
    }

    /** 
     * Check if Attacks is current selection for choice.
     * 
     * @return <code>true</code> if selection, <code>false</code> if not
     */
    public boolean ifAttacks() {
        return choiceSelect3 == ATTACKS_CHOICE;
    }

    /** 
     * Get the 'attacks' element value.
     * 
     * @return value
     */
    public Attacks getAttacks2() {
        return attacks2;
    }

    /** 
     * Set the 'attacks' element value.
     * 
     * @param attacks2
     */
    public void setAttacks2(Attacks attacks2) {
        setChoiceSelect3(ATTACKS_CHOICE);
        this.attacks2 = attacks2;
    }

    private void setChoiceSelect4(int choice) {
        setChoiceSelect3(ATTACKS_CHOICE);
        if (choiceSelect4 == -1) {
            choiceSelect4 = choice;
        } else if (choiceSelect4 != choice) {
            throw new IllegalStateException(
                    "Need to call clearChoiceSelect4() before changing existing choice");
        }
    }

    /** 
     * Clear the choice selection.
     */
    public void clearChoiceSelect4() {
        choiceSelect4 = -1;
    }

    /** 
     * Check if Elements is current selection for choice.
     * 
     * @return <code>true</code> if selection, <code>false</code> if not
     */
    public boolean ifElements() {
        return choiceSelect4 == ELEMENTS_CHOICE;
    }

    /** 
     * Get the 'elements' element value.
     * 
     * @return value
     */
    public Elements getElements2() {
        return elements2;
    }

    /** 
     * Set the 'elements' element value.
     * 
     * @param elements2
     */
    public void setElements2(Elements elements2) {
        setChoiceSelect4(ELEMENTS_CHOICE);
        this.elements2 = elements2;
    }

    private void setChoiceSelect5(int choice) {
        setChoiceSelect4(ELEMENTS_CHOICE);
        if (choiceSelect5 == -1) {
            choiceSelect5 = choice;
        } else if (choiceSelect5 != choice) {
            throw new IllegalStateException(
                    "Need to call clearChoiceSelect5() before changing existing choice");
        }
    }

    /** 
     * Clear the choice selection.
     */
    public void clearChoiceSelect5() {
        choiceSelect5 = -1;
    }

    /** 
     * Check if Sequence1 is current selection for choice.
     * 
     * @return <code>true</code> if selection, <code>false</code> if not
     */
    public boolean ifSequence() {
        return choiceSelect5 == SEQUENCE_CHOICE;
    }

    /** 
     * Get the sequence value.
     * 
     * @return value
     */
    public Sequence1 getSequence1() {
        return sequence1;
    }

    /** 
     * Set the sequence value.
     * 
     * @param sequence1
     */
    public void setSequence1(Sequence1 sequence1) {
        setChoiceSelect5(SEQUENCE_CHOICE);
        this.sequence1 = sequence1;
    }

    /** 
     * Check if Voices is current selection for choice.
     * 
     * @return <code>true</code> if selection, <code>false</code> if not
     */
    public boolean ifVoices() {
        return choiceSelect5 == VOICES_CHOICE;
    }

    /** 
     * Get the 'voices' element value.
     * 
     * @return value
     */
    public Voices getVoices1() {
        return voices1;
    }

    /** 
     * Set the 'voices' element value.
     * 
     * @param voices1
     */
    public void setVoices1(Voices voices1) {
        setChoiceSelect5(VOICES_CHOICE);
        this.voices1 = voices1;
    }

    /** 
     * Get the 'defenses' element value.
     * 
     * @return value
     */
    public Defenses getDefenses3() {
        return defenses3;
    }

    /** 
     * Set the 'defenses' element value.
     * 
     * @param defenses3
     */
    public void setDefenses3(Defenses defenses3) {
        setChoiceSelect5(VOICES_CHOICE);
        this.defenses3 = defenses3;
    }

    /** 
     * Check if Defenses is current selection for choice.
     * 
     * @return <code>true</code> if selection, <code>false</code> if not
     */
    public boolean ifDefenses1() {
        return choiceSelect4 == DEFENSES1_CHOICE;
    }

    /** 
     * Get the 'defenses' element value.
     * 
     * @return value
     */
    public Defenses getDefenses4() {
        return defenses4;
    }

    /** 
     * Set the 'defenses' element value.
     * 
     * @param defenses4
     */
    public void setDefenses4(Defenses defenses4) {
        setChoiceSelect4(DEFENSES1_CHOICE);
        this.defenses4 = defenses4;
    }

    private void setChoiceSelect6(int choice) {
        setChoiceSelect4(DEFENSES1_CHOICE);
        if (choiceSelect6 == -1) {
            choiceSelect6 = choice;
        } else if (choiceSelect6 != choice) {
            throw new IllegalStateException(
                    "Need to call clearChoiceSelect6() before changing existing choice");
        }
    }

    /** 
     * Clear the choice selection.
     */
    public void clearChoiceSelect6() {
        choiceSelect6 = -1;
    }

    /** 
     * Check if Loot is current selection for choice.
     * 
     * @return <code>true</code> if selection, <code>false</code> if not
     */
    public boolean ifLoot() {
        return choiceSelect6 == LOOT_CHOICE;
    }

    /** 
     * Get the 'loot' element value.
     * 
     * @return value
     */
    public Loot getLoot() {
        return loot;
    }

    /** 
     * Set the 'loot' element value.
     * 
     * @param loot
     */
    public void setLoot(Loot loot) {
        setChoiceSelect6(LOOT_CHOICE);
        this.loot = loot;
    }

    /** 
     * Check if Voices is current selection for choice.
     * 
     * @return <code>true</code> if selection, <code>false</code> if not
     */
    public boolean ifVoices1() {
        return choiceSelect6 == VOICES1_CHOICE;
    }

    /** 
     * Get the 'voices' element value.
     * 
     * @return value
     */
    public Voices getVoices2() {
        return voices2;
    }

    /** 
     * Set the 'voices' element value.
     * 
     * @param voices2
     */
    public void setVoices2(Voices voices2) {
        setChoiceSelect6(VOICES1_CHOICE);
        this.voices2 = voices2;
    }

    /** 
     * Get the sequence value.
     * 
     * @return value
     */
    public Sequence2 getSequence2() {
        return sequence2;
    }

    /** 
     * Set the sequence value.
     * 
     * @param sequence2
     */
    public void setSequence2(Sequence2 sequence2) {
        setChoiceSelect6(VOICES1_CHOICE);
        this.sequence2 = sequence2;
    }

    /** 
     * Get the 'loot' element value.
     * 
     * @return value
     */
    public Loot getLoot1() {
        return loot1;
    }

    /** 
     * Set the 'loot' element value.
     * 
     * @param loot1
     */
    public void setLoot1(Loot loot1) {
        setChoiceSelect6(VOICES1_CHOICE);
        this.loot1 = loot1;
    }

    /** 
     * Check if Summons is current selection for choice.
     * 
     * @return <code>true</code> if selection, <code>false</code> if not
     */
    public boolean ifSummons() {
        return choiceSelect6 == SUMMONS_CHOICE;
    }

    /** 
     * Get the 'summons' element value.
     * 
     * @return value
     */
    public Summons getSummons1() {
        return summons1;
    }

    /** 
     * Set the 'summons' element value.
     * 
     * @param summons1
     */
    public void setSummons1(Summons summons1) {
        setChoiceSelect6(SUMMONS_CHOICE);
        this.summons1 = summons1;
    }

    /** 
     * Get the sequence value.
     * 
     * @return value
     */
    public Sequence3 getSequence3() {
        return sequence3;
    }

    /** 
     * Set the sequence value.
     * 
     * @param sequence3
     */
    public void setSequence3(Sequence3 sequence3) {
        setChoiceSelect6(SUMMONS_CHOICE);
        this.sequence3 = sequence3;
    }

    /** 
     * Get the 'voices' element value.
     * 
     * @return value
     */
    public Voices getVoices3() {
        return voices3;
    }

    /** 
     * Set the 'voices' element value.
     * 
     * @param voices3
     */
    public void setVoices3(Voices voices3) {
        setChoiceSelect6(SUMMONS_CHOICE);
        this.voices3 = voices3;
    }

    /** 
     * Get the 'loot' element value.
     * 
     * @return value
     */
    public Loot getLoot2() {
        return loot2;
    }

    /** 
     * Set the 'loot' element value.
     * 
     * @param loot2
     */
    public void setLoot2(Loot loot2) {
        setChoiceSelect6(SUMMONS_CHOICE);
        this.loot2 = loot2;
    }

    /** 
     * Check if Immunities is current selection for choice.
     * 
     * @return <code>true</code> if selection, <code>false</code> if not
     */
    public boolean ifImmunities() {
        return choiceSelect6 == IMMUNITIES_CHOICE;
    }

    /** 
     * Get the 'immunities' element value.
     * 
     * @return value
     */
    public Immunities getImmunities2() {
        return immunities2;
    }

    /** 
     * Set the 'immunities' element value.
     * 
     * @param immunities2
     */
    public void setImmunities2(Immunities immunities2) {
        setChoiceSelect6(IMMUNITIES_CHOICE);
        this.immunities2 = immunities2;
    }

    /** 
     * Get the choice value.
     * 
     * @return value
     */
    public Choice1 getChoice1() {
        return choice1;
    }

    /** 
     * Set the choice value.
     * 
     * @param choice1
     */
    public void setChoice1(Choice1 choice1) {
        setChoiceSelect6(IMMUNITIES_CHOICE);
        this.choice1 = choice1;
    }

    /** 
     * Check if Elements is current selection for choice.
     * 
     * @return <code>true</code> if selection, <code>false</code> if not
     */
    public boolean ifElements1() {
        return choiceSelect6 == ELEMENTS1_CHOICE;
    }

    /** 
     * Get the 'elements' element value.
     * 
     * @return value
     */
    public Elements getElements3() {
        return elements3;
    }

    /** 
     * Set the 'elements' element value.
     * 
     * @param elements3
     */
    public void setElements3(Elements elements3) {
        setChoiceSelect6(ELEMENTS1_CHOICE);
        this.elements3 = elements3;
    }

    /** 
     * Get the choice value.
     * 
     * @return value
     */
    public Choice2 getChoice2() {
        return choice2;
    }

    /** 
     * Set the choice value.
     * 
     * @param choice2
     */
    public void setChoice2(Choice2 choice2) {
        setChoiceSelect6(ELEMENTS1_CHOICE);
        this.choice2 = choice2;
    }

    /** 
     * Check if Flags is current selection for choice.
     * 
     * @return <code>true</code> if selection, <code>false</code> if not
     */
    public boolean ifFlags() {
        return choiceSelect2 == FLAGS_CHOICE;
    }

    /** 
     * Get the 'flags' element value.
     * 
     * @return value
     */
    public Flags getFlags2() {
        return flags2;
    }

    /** 
     * Set the 'flags' element value.
     * 
     * @param flags2
     */
    public void setFlags2(Flags flags2) {
        setChoiceSelect2(FLAGS_CHOICE);
        this.flags2 = flags2;
    }

    /** 
     * Get the 'attacks' element value.
     * 
     * @return value
     */
    public Attacks getAttacks3() {
        return attacks3;
    }

    /** 
     * Set the 'attacks' element value.
     * 
     * @param attacks3
     */
    public void setAttacks3(Attacks attacks3) {
        setChoiceSelect2(FLAGS_CHOICE);
        this.attacks3 = attacks3;
    }

    /** 
     * Get the 'defenses' element value.
     * 
     * @return value
     */
    public Defenses getDefenses5() {
        return defenses5;
    }

    /** 
     * Set the 'defenses' element value.
     * 
     * @param defenses5
     */
    public void setDefenses5(Defenses defenses5) {
        setChoiceSelect2(FLAGS_CHOICE);
        this.defenses5 = defenses5;
    }

    /** 
     * Get the 'elements' element value.
     * 
     * @return value
     */
    public Elements getElements4() {
        return elements4;
    }

    /** 
     * Set the 'elements' element value.
     * 
     * @param elements4
     */
    public void setElements4(Elements elements4) {
        setChoiceSelect2(FLAGS_CHOICE);
        this.elements4 = elements4;
    }

    /** 
     * Get the 'voices' element value.
     * 
     * @return value
     */
    public Voices getVoices4() {
        return voices4;
    }

    /** 
     * Set the 'voices' element value.
     * 
     * @param voices4
     */
    public void setVoices4(Voices voices4) {
        setChoiceSelect2(FLAGS_CHOICE);
        this.voices4 = voices4;
    }

    /** 
     * Get the 'loot' element value.
     * 
     * @return value
     */
    public Loot getLoot3() {
        return loot3;
    }

    /** 
     * Set the 'loot' element value.
     * 
     * @param loot3
     */
    public void setLoot3(Loot loot3) {
        setChoiceSelect2(FLAGS_CHOICE);
        this.loot3 = loot3;
    }

    /** 
     * Check if Strategy is current selection for choice.
     * 
     * @return <code>true</code> if selection, <code>false</code> if not
     */
    public boolean ifStrategy2() {
        return choiceSelect1 == STRATEGY2_CHOICE;
    }

    /** 
     * Get the 'strategy' element value.
     * 
     * @return value
     */
    public Strategy getStrategy2() {
        return strategy2;
    }

    /** 
     * Set the 'strategy' element value.
     * 
     * @param strategy2
     */
    public void setStrategy2(Strategy strategy2) {
        setChoiceSelect1(STRATEGY2_CHOICE);
        this.strategy2 = strategy2;
    }

    /** 
     * Get the 'flags' element value.
     * 
     * @return value
     */
    public Flags getFlags3() {
        return flags3;
    }

    /** 
     * Set the 'flags' element value.
     * 
     * @param flags3
     */
    public void setFlags3(Flags flags3) {
        setChoiceSelect1(STRATEGY2_CHOICE);
        this.flags3 = flags3;
    }

    /** 
     * Get the 'attacks' element value.
     * 
     * @return value
     */
    public Attacks getAttacks4() {
        return attacks4;
    }

    /** 
     * Set the 'attacks' element value.
     * 
     * @param attacks4
     */
    public void setAttacks4(Attacks attacks4) {
        setChoiceSelect1(STRATEGY2_CHOICE);
        this.attacks4 = attacks4;
    }

    private void setChoiceSelect7(int choice) {
        setChoiceSelect1(STRATEGY2_CHOICE);
        if (choiceSelect7 == -1) {
            choiceSelect7 = choice;
        } else if (choiceSelect7 != choice) {
            throw new IllegalStateException(
                    "Need to call clearChoiceSelect7() before changing existing choice");
        }
    }

    /** 
     * Clear the choice selection.
     */
    public void clearChoiceSelect7() {
        choiceSelect7 = -1;
    }

    /** 
     * Check if Elements is current selection for choice.
     * 
     * @return <code>true</code> if selection, <code>false</code> if not
     */
    public boolean ifElements2() {
        return choiceSelect7 == ELEMENTS2_CHOICE;
    }

    /** 
     * Get the 'elements' element value.
     * 
     * @return value
     */
    public Elements getElements5() {
        return elements5;
    }

    /** 
     * Set the 'elements' element value.
     * 
     * @param elements5
     */
    public void setElements5(Elements elements5) {
        setChoiceSelect7(ELEMENTS2_CHOICE);
        this.elements5 = elements5;
    }

    /** 
     * Get the 'defenses' element value.
     * 
     * @return value
     */
    public Defenses getDefenses6() {
        return defenses6;
    }

    /** 
     * Set the 'defenses' element value.
     * 
     * @param defenses6
     */
    public void setDefenses6(Defenses defenses6) {
        setChoiceSelect7(ELEMENTS2_CHOICE);
        this.defenses6 = defenses6;
    }

    /** 
     * Check if Defenses is current selection for choice.
     * 
     * @return <code>true</code> if selection, <code>false</code> if not
     */
    public boolean ifDefenses2() {
        return choiceSelect7 == DEFENSES2_CHOICE;
    }

    /** 
     * Get the 'defenses' element value.
     * 
     * @return value
     */
    public Defenses getDefenses7() {
        return defenses7;
    }

    /** 
     * Set the 'defenses' element value.
     * 
     * @param defenses7
     */
    public void setDefenses7(Defenses defenses7) {
        setChoiceSelect7(DEFENSES2_CHOICE);
        this.defenses7 = defenses7;
    }

    /** 
     * Get the 'elements' element value.
     * 
     * @return value
     */
    public Elements getElements6() {
        return elements6;
    }

    /** 
     * Set the 'elements' element value.
     * 
     * @param elements6
     */
    public void setElements6(Elements elements6) {
        setChoiceSelect7(DEFENSES2_CHOICE);
        this.elements6 = elements6;
    }

    /** 
     * Get the choice value.
     * 
     * @return value
     */
    public Choice3 getChoice3() {
        return choice3;
    }

    /** 
     * Set the choice value.
     * 
     * @param choice3
     */
    public void setChoice3(Choice3 choice3) {
        setChoiceSelect7(DEFENSES2_CHOICE);
        this.choice3 = choice3;
    }

    /** 
     * Get the 'speed' attribute value.
     * 
     * @return value
     */
    public BigInteger getSpeed() {
        return speed;
    }

    /** 
     * Set the 'speed' attribute value.
     * 
     * @param speed
     */
    public void setSpeed(BigInteger speed) {
        this.speed = speed;
    }

    /** 
     * Get the 'race' attribute value.
     * 
     * @return value
     */
    public Race getRace() {
        return race;
    }

    /** 
     * Set the 'race' attribute value.
     * 
     * @param race
     */
    public void setRace(Race race) {
        this.race = race;
    }

    /** 
     * Get the 'namedescription' attribute value.
     * 
     * @return value
     */
    public String getNamedescription() {
        return namedescription;
    }

    /** 
     * Set the 'namedescription' attribute value.
     * 
     * @param namedescription
     */
    public void setNamedescription(String namedescription) {
        this.namedescription = namedescription;
    }

    /** 
     * Get the 'nameDescription' attribute value.
     * 
     * @return value
     */
    public String getNameDescription() {
        return nameDescription;
    }

    /** 
     * Set the 'nameDescription' attribute value.
     * 
     * @param nameDescription
     */
    public void setNameDescription(String nameDescription) {
        this.nameDescription = nameDescription;
    }

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
     * Get the 'manacost' attribute value.
     * 
     * @return value
     */
    public BigInteger getManacost() {
        return manacost;
    }

    /** 
     * Set the 'manacost' attribute value.
     * 
     * @param manacost
     */
    public void setManacost(BigInteger manacost) {
        this.manacost = manacost;
    }

    /** 
     * Get the 'experience' attribute value.
     * 
     * @return value
     */
    public BigInteger getExperience() {
        return experience;
    }

    /** 
     * Set the 'experience' attribute value.
     * 
     * @param experience
     */
    public void setExperience(BigInteger experience) {
        this.experience = experience;
    }
    /** 
     * Schema fragment(s) for this class:
     * <pre>
     * &lt;xs:sequence xmlns:xs="http://www.w3.org/2001/XMLSchema" minOccurs="0">
     *   &lt;xs:element ref="summons" minOccurs="0"/>
     *   &lt;xs:element ref="voices"/>
     *   &lt;xs:element ref="loot"/>
     * &lt;/xs:sequence>
     * </pre>
     */
    public static class Sequence
    {
        private Summons summons;
        private Voices voices;
        private Loot loot;

        /** 
         * Get the 'summons' element value.
         * 
         * @return value
         */
        public Summons getSummons() {
            return summons;
        }

        /** 
         * Set the 'summons' element value.
         * 
         * @param summons
         */
        public void setSummons(Summons summons) {
            this.summons = summons;
        }

        /** 
         * Get the 'voices' element value.
         * 
         * @return value
         */
        public Voices getVoices() {
            return voices;
        }

        /** 
         * Set the 'voices' element value.
         * 
         * @param voices
         */
        public void setVoices(Voices voices) {
            this.voices = voices;
        }

        /** 
         * Get the 'loot' element value.
         * 
         * @return value
         */
        public Loot getLoot() {
            return loot;
        }

        /** 
         * Set the 'loot' element value.
         * 
         * @param loot
         */
        public void setLoot(Loot loot) {
            this.loot = loot;
        }
    }
    /** 
     * Schema fragment(s) for this class:
     * <pre>
     * &lt;xs:choice xmlns:xs="http://www.w3.org/2001/XMLSchema" minOccurs="0">
     *   &lt;xs:sequence>
     *     &lt;!-- Reference to inner class Sequence -->
     *   &lt;/xs:sequence>
     *   &lt;xs:sequence>
     *     &lt;xs:element ref="immunities"/>
     *     &lt;xs:element ref="voices"/>
     *   &lt;/xs:sequence>
     *   &lt;xs:sequence>
     *     &lt;xs:element ref="voices"/>
     *     &lt;xs:element ref="loot" minOccurs="0"/>
     *   &lt;/xs:sequence>
     * &lt;/xs:choice>
     * </pre>
     */
    public static class Choice
    {
        private int choiceSelect = -1;
        private static final int SEQUENCE_CHOICE = 0;
        private static final int IMMUNITIES_CHOICE = 1;
        private static final int VOICES_CHOICE = 2;
        private Sequence sequence;
        private Immunities immunities;
        private Voices voices;
        private Voices voices1;
        private Loot loot;

        private void setChoiceSelect(int choice) {
            if (choiceSelect == -1) {
                choiceSelect = choice;
            } else if (choiceSelect != choice) {
                throw new IllegalStateException(
                        "Need to call clearChoiceSelect() before changing existing choice");
            }
        }

        /** 
         * Clear the choice selection.
         */
        public void clearChoiceSelect() {
            choiceSelect = -1;
        }

        /** 
         * Check if Sequence is current selection for choice.
         * 
         * @return <code>true</code> if selection, <code>false</code> if not
         */
        public boolean ifSequence() {
            return choiceSelect == SEQUENCE_CHOICE;
        }

        /** 
         * Get the sequence value.
         * 
         * @return value
         */
        public Sequence getSequence() {
            return sequence;
        }

        /** 
         * Set the sequence value.
         * 
         * @param sequence
         */
        public void setSequence(Sequence sequence) {
            setChoiceSelect(SEQUENCE_CHOICE);
            this.sequence = sequence;
        }

        /** 
         * Check if Immunities is current selection for choice.
         * 
         * @return <code>true</code> if selection, <code>false</code> if not
         */
        public boolean ifImmunities() {
            return choiceSelect == IMMUNITIES_CHOICE;
        }

        /** 
         * Get the 'immunities' element value.
         * 
         * @return value
         */
        public Immunities getImmunities() {
            return immunities;
        }

        /** 
         * Set the 'immunities' element value.
         * 
         * @param immunities
         */
        public void setImmunities(Immunities immunities) {
            setChoiceSelect(IMMUNITIES_CHOICE);
            this.immunities = immunities;
        }

        /** 
         * Get the 'voices' element value.
         * 
         * @return value
         */
        public Voices getVoices() {
            return voices;
        }

        /** 
         * Set the 'voices' element value.
         * 
         * @param voices
         */
        public void setVoices(Voices voices) {
            setChoiceSelect(IMMUNITIES_CHOICE);
            this.voices = voices;
        }

        /** 
         * Check if Voices is current selection for choice.
         * 
         * @return <code>true</code> if selection, <code>false</code> if not
         */
        public boolean ifVoices() {
            return choiceSelect == VOICES_CHOICE;
        }

        /** 
         * Get the 'voices' element value.
         * 
         * @return value
         */
        public Voices getVoices1() {
            return voices1;
        }

        /** 
         * Set the 'voices' element value.
         * 
         * @param voices1
         */
        public void setVoices1(Voices voices1) {
            setChoiceSelect(VOICES_CHOICE);
            this.voices1 = voices1;
        }

        /** 
         * Get the 'loot' element value.
         * 
         * @return value
         */
        public Loot getLoot() {
            return loot;
        }

        /** 
         * Set the 'loot' element value.
         * 
         * @param loot
         */
        public void setLoot(Loot loot) {
            setChoiceSelect(VOICES_CHOICE);
            this.loot = loot;
        }
        /** 
         * Schema fragment(s) for this class:
         * <pre>
         * &lt;xs:sequence xmlns:xs="http://www.w3.org/2001/XMLSchema">
         *   &lt;xs:sequence minOccurs="0">
         *     &lt;!-- Reference to inner class SequenceInner -->
         *   &lt;/xs:sequence>
         *   &lt;xs:element ref="loot"/>
         * &lt;/xs:sequence>
         * </pre>
         */
        public static class Sequence
        {
            private SequenceInner sequence;
            private Loot loot;

            /** 
             * Get the sequence value.
             * 
             * @return value
             */
            public SequenceInner getSequence() {
                return sequence;
            }

            /** 
             * Set the sequence value.
             * 
             * @param sequence
             */
            public void setSequence(SequenceInner sequence) {
                this.sequence = sequence;
            }

            /** 
             * Get the 'loot' element value.
             * 
             * @return value
             */
            public Loot getLoot() {
                return loot;
            }

            /** 
             * Set the 'loot' element value.
             * 
             * @param loot
             */
            public void setLoot(Loot loot) {
                this.loot = loot;
            }
            /** 
             * Schema fragment(s) for this class:
             * <pre>
             * &lt;xs:sequence xmlns:xs="http://www.w3.org/2001/XMLSchema" minOccurs="0">
             *   &lt;xs:element ref="elements"/>
             *   &lt;xs:element ref="voices"/>
             * &lt;/xs:sequence>
             * </pre>
             */
            public static class SequenceInner
            {
                private Elements elements;
                private Voices voices;

                /** 
                 * Get the 'elements' element value.
                 * 
                 * @return value
                 */
                public Elements getElements() {
                    return elements;
                }

                /** 
                 * Set the 'elements' element value.
                 * 
                 * @param elements
                 */
                public void setElements(Elements elements) {
                    this.elements = elements;
                }

                /** 
                 * Get the 'voices' element value.
                 * 
                 * @return value
                 */
                public Voices getVoices() {
                    return voices;
                }

                /** 
                 * Set the 'voices' element value.
                 * 
                 * @param voices
                 */
                public void setVoices(Voices voices) {
                    this.voices = voices;
                }
            }
        }
    }
    /** 
     * Schema fragment(s) for this class:
     * <pre>
     * &lt;xs:sequence xmlns:xs="http://www.w3.org/2001/XMLSchema">
     *   &lt;xs:sequence minOccurs="0">
     *     &lt;!-- Reference to inner class Sequence -->
     *   &lt;/xs:sequence>
     *   &lt;xs:element ref="loot"/>
     * &lt;/xs:sequence>
     * </pre>
     */
    public static class Sequence1
    {
        private Sequence sequence;
        private Loot loot;

        /** 
         * Get the sequence value.
         * 
         * @return value
         */
        public Sequence getSequence() {
            return sequence;
        }

        /** 
         * Set the sequence value.
         * 
         * @param sequence
         */
        public void setSequence(Sequence sequence) {
            this.sequence = sequence;
        }

        /** 
         * Get the 'loot' element value.
         * 
         * @return value
         */
        public Loot getLoot() {
            return loot;
        }

        /** 
         * Set the 'loot' element value.
         * 
         * @param loot
         */
        public void setLoot(Loot loot) {
            this.loot = loot;
        }
        /** 
         * Schema fragment(s) for this class:
         * <pre>
         * &lt;xs:sequence xmlns:xs="http://www.w3.org/2001/XMLSchema" minOccurs="0">
         *   &lt;xs:element ref="immunities"/>
         *   &lt;xs:element ref="voices"/>
         * &lt;/xs:sequence>
         * </pre>
         */
        public static class Sequence
        {
            private Immunities immunities;
            private Voices voices;

            /** 
             * Get the 'immunities' element value.
             * 
             * @return value
             */
            public Immunities getImmunities() {
                return immunities;
            }

            /** 
             * Set the 'immunities' element value.
             * 
             * @param immunities
             */
            public void setImmunities(Immunities immunities) {
                this.immunities = immunities;
            }

            /** 
             * Get the 'voices' element value.
             * 
             * @return value
             */
            public Voices getVoices() {
                return voices;
            }

            /** 
             * Set the 'voices' element value.
             * 
             * @param voices
             */
            public void setVoices(Voices voices) {
                this.voices = voices;
            }
        }
    }
    /** 
     * Schema fragment(s) for this class:
     * <pre>
     * &lt;xs:sequence xmlns:xs="http://www.w3.org/2001/XMLSchema" minOccurs="0">
     *   &lt;xs:element ref="elements"/>
     *   &lt;xs:element ref="immunities"/>
     * &lt;/xs:sequence>
     * </pre>
     */
    public static class Sequence2
    {
        private Elements elements;
        private Immunities immunities;

        /** 
         * Get the 'elements' element value.
         * 
         * @return value
         */
        public Elements getElements() {
            return elements;
        }

        /** 
         * Set the 'elements' element value.
         * 
         * @param elements
         */
        public void setElements(Elements elements) {
            this.elements = elements;
        }

        /** 
         * Get the 'immunities' element value.
         * 
         * @return value
         */
        public Immunities getImmunities() {
            return immunities;
        }

        /** 
         * Set the 'immunities' element value.
         * 
         * @param immunities
         */
        public void setImmunities(Immunities immunities) {
            this.immunities = immunities;
        }
    }
    /** 
     * Schema fragment(s) for this class:
     * <pre>
     * &lt;xs:sequence xmlns:xs="http://www.w3.org/2001/XMLSchema" minOccurs="0">
     *   &lt;xs:element ref="elements"/>
     *   &lt;xs:element ref="immunities"/>
     * &lt;/xs:sequence>
     * </pre>
     */
    public static class Sequence3
    {
        private Elements elements;
        private Immunities immunities;

        /** 
         * Get the 'elements' element value.
         * 
         * @return value
         */
        public Elements getElements() {
            return elements;
        }

        /** 
         * Set the 'elements' element value.
         * 
         * @param elements
         */
        public void setElements(Elements elements) {
            this.elements = elements;
        }

        /** 
         * Get the 'immunities' element value.
         * 
         * @return value
         */
        public Immunities getImmunities() {
            return immunities;
        }

        /** 
         * Set the 'immunities' element value.
         * 
         * @param immunities
         */
        public void setImmunities(Immunities immunities) {
            this.immunities = immunities;
        }
    }
    /** 
     * Schema fragment(s) for this class:
     * <pre>
     * &lt;xs:choice xmlns:xs="http://www.w3.org/2001/XMLSchema" minOccurs="0">
     *   &lt;xs:element ref="loot"/>
     *   &lt;xs:sequence>
     *     &lt;xs:element ref="voices"/>
     *     &lt;xs:sequence minOccurs="0">
     *       &lt;!-- Reference to inner class Sequence -->
     *     &lt;/xs:sequence>
     *   &lt;/xs:sequence>
     *   &lt;xs:sequence>
     *     &lt;xs:element ref="summons"/>
     *     &lt;xs:sequence minOccurs="0">
     *       &lt;!-- Reference to inner class Sequence1 -->
     *     &lt;/xs:sequence>
     *   &lt;/xs:sequence>
     *   &lt;xs:sequence>
     *     &lt;xs:element ref="elements"/>
     *     &lt;xs:choice minOccurs="0">
     *       &lt;!-- Reference to inner class Choice -->
     *     &lt;/xs:choice>
     *   &lt;/xs:sequence>
     * &lt;/xs:choice>
     * </pre>
     */
    public static class Choice1
    {
        private int choice1Select = -1;
        private static final int LOOT_CHOICE = 0;
        private static final int VOICES_CHOICE = 1;
        private static final int SUMMONS_CHOICE = 2;
        private static final int ELEMENTS_CHOICE = 3;
        private Loot loot;
        private Voices voices;
        private Sequence sequence;
        private Summons summons;
        private Sequence1 sequence1;
        private Elements elements;
        private Choice choice;

        private void setChoice1Select(int choice) {
            if (choice1Select == -1) {
                choice1Select = choice;
            } else if (choice1Select != choice) {
                throw new IllegalStateException(
                        "Need to call clearChoice1Select() before changing existing choice");
            }
        }

        /** 
         * Clear the choice selection.
         */
        public void clearChoice1Select() {
            choice1Select = -1;
        }

        /** 
         * Check if Loot is current selection for choice.
         * 
         * @return <code>true</code> if selection, <code>false</code> if not
         */
        public boolean ifLoot() {
            return choice1Select == LOOT_CHOICE;
        }

        /** 
         * Get the 'loot' element value.
         * 
         * @return value
         */
        public Loot getLoot() {
            return loot;
        }

        /** 
         * Set the 'loot' element value.
         * 
         * @param loot
         */
        public void setLoot(Loot loot) {
            setChoice1Select(LOOT_CHOICE);
            this.loot = loot;
        }

        /** 
         * Check if Voices is current selection for choice.
         * 
         * @return <code>true</code> if selection, <code>false</code> if not
         */
        public boolean ifVoices() {
            return choice1Select == VOICES_CHOICE;
        }

        /** 
         * Get the 'voices' element value.
         * 
         * @return value
         */
        public Voices getVoices() {
            return voices;
        }

        /** 
         * Set the 'voices' element value.
         * 
         * @param voices
         */
        public void setVoices(Voices voices) {
            setChoice1Select(VOICES_CHOICE);
            this.voices = voices;
        }

        /** 
         * Get the sequence value.
         * 
         * @return value
         */
        public Sequence getSequence() {
            return sequence;
        }

        /** 
         * Set the sequence value.
         * 
         * @param sequence
         */
        public void setSequence(Sequence sequence) {
            setChoice1Select(VOICES_CHOICE);
            this.sequence = sequence;
        }

        /** 
         * Check if Summons is current selection for choice.
         * 
         * @return <code>true</code> if selection, <code>false</code> if not
         */
        public boolean ifSummons() {
            return choice1Select == SUMMONS_CHOICE;
        }

        /** 
         * Get the 'summons' element value.
         * 
         * @return value
         */
        public Summons getSummons() {
            return summons;
        }

        /** 
         * Set the 'summons' element value.
         * 
         * @param summons
         */
        public void setSummons(Summons summons) {
            setChoice1Select(SUMMONS_CHOICE);
            this.summons = summons;
        }

        /** 
         * Get the sequence value.
         * 
         * @return value
         */
        public Sequence1 getSequence1() {
            return sequence1;
        }

        /** 
         * Set the sequence value.
         * 
         * @param sequence1
         */
        public void setSequence1(Sequence1 sequence1) {
            setChoice1Select(SUMMONS_CHOICE);
            this.sequence1 = sequence1;
        }

        /** 
         * Check if Elements is current selection for choice.
         * 
         * @return <code>true</code> if selection, <code>false</code> if not
         */
        public boolean ifElements() {
            return choice1Select == ELEMENTS_CHOICE;
        }

        /** 
         * Get the 'elements' element value.
         * 
         * @return value
         */
        public Elements getElements() {
            return elements;
        }

        /** 
         * Set the 'elements' element value.
         * 
         * @param elements
         */
        public void setElements(Elements elements) {
            setChoice1Select(ELEMENTS_CHOICE);
            this.elements = elements;
        }

        /** 
         * Get the choice value.
         * 
         * @return value
         */
        public Choice getChoice() {
            return choice;
        }

        /** 
         * Set the choice value.
         * 
         * @param choice
         */
        public void setChoice(Choice choice) {
            setChoice1Select(ELEMENTS_CHOICE);
            this.choice = choice;
        }
        /** 
         * Schema fragment(s) for this class:
         * <pre>
         * &lt;xs:sequence xmlns:xs="http://www.w3.org/2001/XMLSchema" minOccurs="0">
         *   &lt;xs:choice minOccurs="0">
         *     &lt;!-- Reference to inner class Choice -->
         *   &lt;/xs:choice>
         *   &lt;xs:element ref="loot"/>
         * &lt;/xs:sequence>
         * </pre>
         */
        public static class Sequence
        {
            private Choice choice;
            private Loot loot;

            /** 
             * Get the choice value.
             * 
             * @return value
             */
            public Choice getChoice() {
                return choice;
            }

            /** 
             * Set the choice value.
             * 
             * @param choice
             */
            public void setChoice(Choice choice) {
                this.choice = choice;
            }

            /** 
             * Get the 'loot' element value.
             * 
             * @return value
             */
            public Loot getLoot() {
                return loot;
            }

            /** 
             * Set the 'loot' element value.
             * 
             * @param loot
             */
            public void setLoot(Loot loot) {
                this.loot = loot;
            }
            /** 
             * Schema fragment(s) for this class:
             * <pre>
             * &lt;xs:choice xmlns:xs="http://www.w3.org/2001/XMLSchema" minOccurs="0">
             *   &lt;xs:element ref="summons"/>
             *   &lt;xs:sequence>
             *     &lt;xs:element ref="elements"/>
             *     &lt;xs:element ref="immunities"/>
             *   &lt;/xs:sequence>
             * &lt;/xs:choice>
             * </pre>
             */
            public static class Choice
            {
                private int choiceSelect = -1;
                private static final int SUMMONS_CHOICE = 0;
                private static final int ELEMENTS_CHOICE = 1;
                private Summons summons;
                private Elements elements;
                private Immunities immunities;

                private void setChoiceSelect(int choice) {
                    if (choiceSelect == -1) {
                        choiceSelect = choice;
                    } else if (choiceSelect != choice) {
                        throw new IllegalStateException(
                                "Need to call clearChoiceSelect() before changing existing choice");
                    }
                }

                /** 
                 * Clear the choice selection.
                 */
                public void clearChoiceSelect() {
                    choiceSelect = -1;
                }

                /** 
                 * Check if Summons is current selection for choice.
                 * 
                 * @return <code>true</code> if selection, <code>false</code> if not
                 */
                public boolean ifSummons() {
                    return choiceSelect == SUMMONS_CHOICE;
                }

                /** 
                 * Get the 'summons' element value.
                 * 
                 * @return value
                 */
                public Summons getSummons() {
                    return summons;
                }

                /** 
                 * Set the 'summons' element value.
                 * 
                 * @param summons
                 */
                public void setSummons(Summons summons) {
                    setChoiceSelect(SUMMONS_CHOICE);
                    this.summons = summons;
                }

                /** 
                 * Check if Elements is current selection for choice.
                 * 
                 * @return <code>true</code> if selection, <code>false</code> if not
                 */
                public boolean ifElements() {
                    return choiceSelect == ELEMENTS_CHOICE;
                }

                /** 
                 * Get the 'elements' element value.
                 * 
                 * @return value
                 */
                public Elements getElements() {
                    return elements;
                }

                /** 
                 * Set the 'elements' element value.
                 * 
                 * @param elements
                 */
                public void setElements(Elements elements) {
                    setChoiceSelect(ELEMENTS_CHOICE);
                    this.elements = elements;
                }

                /** 
                 * Get the 'immunities' element value.
                 * 
                 * @return value
                 */
                public Immunities getImmunities() {
                    return immunities;
                }

                /** 
                 * Set the 'immunities' element value.
                 * 
                 * @param immunities
                 */
                public void setImmunities(Immunities immunities) {
                    setChoiceSelect(ELEMENTS_CHOICE);
                    this.immunities = immunities;
                }
            }
        }
        /** 
         * Schema fragment(s) for this class:
         * <pre>
         * &lt;xs:sequence xmlns:xs="http://www.w3.org/2001/XMLSchema" minOccurs="0">
         *   &lt;xs:element ref="voices" minOccurs="0"/>
         *   &lt;xs:element ref="loot"/>
         * &lt;/xs:sequence>
         * </pre>
         */
        public static class Sequence1
        {
            private Voices voices;
            private Loot loot;

            /** 
             * Get the 'voices' element value.
             * 
             * @return value
             */
            public Voices getVoices() {
                return voices;
            }

            /** 
             * Set the 'voices' element value.
             * 
             * @param voices
             */
            public void setVoices(Voices voices) {
                this.voices = voices;
            }

            /** 
             * Get the 'loot' element value.
             * 
             * @return value
             */
            public Loot getLoot() {
                return loot;
            }

            /** 
             * Set the 'loot' element value.
             * 
             * @param loot
             */
            public void setLoot(Loot loot) {
                this.loot = loot;
            }
        }
        /** 
         * Schema fragment(s) for this class:
         * <pre>
         * &lt;xs:choice xmlns:xs="http://www.w3.org/2001/XMLSchema" minOccurs="0">
         *   &lt;xs:element ref="loot"/>
         *   &lt;xs:sequence>
         *     &lt;xs:element ref="voices"/>
         *     &lt;xs:element ref="loot" minOccurs="0"/>
         *   &lt;/xs:sequence>
         *   &lt;xs:sequence>
         *     &lt;xs:element ref="summons"/>
         *     &lt;xs:element ref="voices" minOccurs="0"/>
         *     &lt;xs:element ref="loot"/>
         *   &lt;/xs:sequence>
         * &lt;/xs:choice>
         * </pre>
         */
        public static class Choice
        {
            private int choiceSelect = -1;
            private static final int LOOT_CHOICE = 0;
            private static final int VOICES_CHOICE = 1;
            private static final int SUMMONS_CHOICE = 2;
            private Loot loot;
            private Voices voices;
            private Loot loot1;
            private Summons summons;
            private Voices voices1;
            private Loot loot2;

            private void setChoiceSelect(int choice) {
                if (choiceSelect == -1) {
                    choiceSelect = choice;
                } else if (choiceSelect != choice) {
                    throw new IllegalStateException(
                            "Need to call clearChoiceSelect() before changing existing choice");
                }
            }

            /** 
             * Clear the choice selection.
             */
            public void clearChoiceSelect() {
                choiceSelect = -1;
            }

            /** 
             * Check if Loot is current selection for choice.
             * 
             * @return <code>true</code> if selection, <code>false</code> if not
             */
            public boolean ifLoot() {
                return choiceSelect == LOOT_CHOICE;
            }

            /** 
             * Get the 'loot' element value.
             * 
             * @return value
             */
            public Loot getLoot() {
                return loot;
            }

            /** 
             * Set the 'loot' element value.
             * 
             * @param loot
             */
            public void setLoot(Loot loot) {
                setChoiceSelect(LOOT_CHOICE);
                this.loot = loot;
            }

            /** 
             * Check if Voices is current selection for choice.
             * 
             * @return <code>true</code> if selection, <code>false</code> if not
             */
            public boolean ifVoices() {
                return choiceSelect == VOICES_CHOICE;
            }

            /** 
             * Get the 'voices' element value.
             * 
             * @return value
             */
            public Voices getVoices() {
                return voices;
            }

            /** 
             * Set the 'voices' element value.
             * 
             * @param voices
             */
            public void setVoices(Voices voices) {
                setChoiceSelect(VOICES_CHOICE);
                this.voices = voices;
            }

            /** 
             * Get the 'loot' element value.
             * 
             * @return value
             */
            public Loot getLoot1() {
                return loot1;
            }

            /** 
             * Set the 'loot' element value.
             * 
             * @param loot1
             */
            public void setLoot1(Loot loot1) {
                setChoiceSelect(VOICES_CHOICE);
                this.loot1 = loot1;
            }

            /** 
             * Check if Summons is current selection for choice.
             * 
             * @return <code>true</code> if selection, <code>false</code> if not
             */
            public boolean ifSummons() {
                return choiceSelect == SUMMONS_CHOICE;
            }

            /** 
             * Get the 'summons' element value.
             * 
             * @return value
             */
            public Summons getSummons() {
                return summons;
            }

            /** 
             * Set the 'summons' element value.
             * 
             * @param summons
             */
            public void setSummons(Summons summons) {
                setChoiceSelect(SUMMONS_CHOICE);
                this.summons = summons;
            }

            /** 
             * Get the 'voices' element value.
             * 
             * @return value
             */
            public Voices getVoices1() {
                return voices1;
            }

            /** 
             * Set the 'voices' element value.
             * 
             * @param voices1
             */
            public void setVoices1(Voices voices1) {
                setChoiceSelect(SUMMONS_CHOICE);
                this.voices1 = voices1;
            }

            /** 
             * Get the 'loot' element value.
             * 
             * @return value
             */
            public Loot getLoot2() {
                return loot2;
            }

            /** 
             * Set the 'loot' element value.
             * 
             * @param loot2
             */
            public void setLoot2(Loot loot2) {
                setChoiceSelect(SUMMONS_CHOICE);
                this.loot2 = loot2;
            }
        }
    }
    /** 
     * Schema fragment(s) for this class:
     * <pre>
     * &lt;xs:choice xmlns:xs="http://www.w3.org/2001/XMLSchema" minOccurs="0">
     *   &lt;xs:sequence>
     *     &lt;!-- Reference to inner class Sequence -->
     *   &lt;/xs:sequence>
     *   &lt;xs:sequence>
     *     &lt;xs:element ref="voices"/>
     *     &lt;xs:element ref="loot" minOccurs="0"/>
     *   &lt;/xs:sequence>
     *   &lt;xs:sequence>
     *     &lt;xs:element ref="immunities"/>
     *     &lt;xs:choice minOccurs="0">
     *       &lt;!-- Reference to inner class Choice -->
     *     &lt;/xs:choice>
     *   &lt;/xs:sequence>
     * &lt;/xs:choice>
     * </pre>
     */
    public static class Choice2
    {
        private int choice2Select = -1;
        private static final int SEQUENCE_CHOICE = 0;
        private static final int VOICES_CHOICE = 1;
        private static final int IMMUNITIES_CHOICE = 2;
        private Sequence sequence;
        private Voices voices;
        private Loot loot;
        private Immunities immunities;
        private Choice choice;

        private void setChoice2Select(int choice) {
            if (choice2Select == -1) {
                choice2Select = choice;
            } else if (choice2Select != choice) {
                throw new IllegalStateException(
                        "Need to call clearChoice2Select() before changing existing choice");
            }
        }

        /** 
         * Clear the choice selection.
         */
        public void clearChoice2Select() {
            choice2Select = -1;
        }

        /** 
         * Check if Sequence is current selection for choice.
         * 
         * @return <code>true</code> if selection, <code>false</code> if not
         */
        public boolean ifSequence() {
            return choice2Select == SEQUENCE_CHOICE;
        }

        /** 
         * Get the sequence value.
         * 
         * @return value
         */
        public Sequence getSequence() {
            return sequence;
        }

        /** 
         * Set the sequence value.
         * 
         * @param sequence
         */
        public void setSequence(Sequence sequence) {
            setChoice2Select(SEQUENCE_CHOICE);
            this.sequence = sequence;
        }

        /** 
         * Check if Voices is current selection for choice.
         * 
         * @return <code>true</code> if selection, <code>false</code> if not
         */
        public boolean ifVoices() {
            return choice2Select == VOICES_CHOICE;
        }

        /** 
         * Get the 'voices' element value.
         * 
         * @return value
         */
        public Voices getVoices() {
            return voices;
        }

        /** 
         * Set the 'voices' element value.
         * 
         * @param voices
         */
        public void setVoices(Voices voices) {
            setChoice2Select(VOICES_CHOICE);
            this.voices = voices;
        }

        /** 
         * Get the 'loot' element value.
         * 
         * @return value
         */
        public Loot getLoot() {
            return loot;
        }

        /** 
         * Set the 'loot' element value.
         * 
         * @param loot
         */
        public void setLoot(Loot loot) {
            setChoice2Select(VOICES_CHOICE);
            this.loot = loot;
        }

        /** 
         * Check if Immunities is current selection for choice.
         * 
         * @return <code>true</code> if selection, <code>false</code> if not
         */
        public boolean ifImmunities() {
            return choice2Select == IMMUNITIES_CHOICE;
        }

        /** 
         * Get the 'immunities' element value.
         * 
         * @return value
         */
        public Immunities getImmunities() {
            return immunities;
        }

        /** 
         * Set the 'immunities' element value.
         * 
         * @param immunities
         */
        public void setImmunities(Immunities immunities) {
            setChoice2Select(IMMUNITIES_CHOICE);
            this.immunities = immunities;
        }

        /** 
         * Get the choice value.
         * 
         * @return value
         */
        public Choice getChoice() {
            return choice;
        }

        /** 
         * Set the choice value.
         * 
         * @param choice
         */
        public void setChoice(Choice choice) {
            setChoice2Select(IMMUNITIES_CHOICE);
            this.choice = choice;
        }
        /** 
         * Schema fragment(s) for this class:
         * <pre>
         * &lt;xs:sequence xmlns:xs="http://www.w3.org/2001/XMLSchema">
         *   &lt;xs:sequence minOccurs="0">
         *     &lt;!-- Reference to inner class SequenceInner -->
         *   &lt;/xs:sequence>
         *   &lt;xs:element ref="loot"/>
         * &lt;/xs:sequence>
         * </pre>
         */
        public static class Sequence
        {
            private SequenceInner sequence;
            private Loot loot;

            /** 
             * Get the sequence value.
             * 
             * @return value
             */
            public SequenceInner getSequence() {
                return sequence;
            }

            /** 
             * Set the sequence value.
             * 
             * @param sequence
             */
            public void setSequence(SequenceInner sequence) {
                this.sequence = sequence;
            }

            /** 
             * Get the 'loot' element value.
             * 
             * @return value
             */
            public Loot getLoot() {
                return loot;
            }

            /** 
             * Set the 'loot' element value.
             * 
             * @param loot
             */
            public void setLoot(Loot loot) {
                this.loot = loot;
            }
            /** 
             * Schema fragment(s) for this class:
             * <pre>
             * &lt;xs:sequence xmlns:xs="http://www.w3.org/2001/XMLSchema" minOccurs="0">
             *   &lt;xs:element ref="summons"/>
             *   &lt;xs:element ref="voices"/>
             * &lt;/xs:sequence>
             * </pre>
             */
            public static class SequenceInner
            {
                private Summons summons;
                private Voices voices;

                /** 
                 * Get the 'summons' element value.
                 * 
                 * @return value
                 */
                public Summons getSummons() {
                    return summons;
                }

                /** 
                 * Set the 'summons' element value.
                 * 
                 * @param summons
                 */
                public void setSummons(Summons summons) {
                    this.summons = summons;
                }

                /** 
                 * Get the 'voices' element value.
                 * 
                 * @return value
                 */
                public Voices getVoices() {
                    return voices;
                }

                /** 
                 * Set the 'voices' element value.
                 * 
                 * @param voices
                 */
                public void setVoices(Voices voices) {
                    this.voices = voices;
                }
            }
        }
        /** 
         * Schema fragment(s) for this class:
         * <pre>
         * &lt;xs:choice xmlns:xs="http://www.w3.org/2001/XMLSchema" minOccurs="0">
         *   &lt;xs:element ref="loot"/>
         *   &lt;xs:sequence>
         *     &lt;xs:element ref="voices"/>
         *     &lt;xs:sequence minOccurs="0">
         *       &lt;!-- Reference to inner class Sequence -->
         *     &lt;/xs:sequence>
         *   &lt;/xs:sequence>
         *   &lt;xs:sequence>
         *     &lt;xs:element ref="summons"/>
         *     &lt;xs:choice minOccurs="0">
         *       &lt;!-- Reference to inner class ChoiceInner -->
         *     &lt;/xs:choice>
         *   &lt;/xs:sequence>
         * &lt;/xs:choice>
         * </pre>
         */
        public static class Choice
        {
            private int choiceSelect = -1;
            private static final int LOOT_CHOICE = 0;
            private static final int VOICES_CHOICE = 1;
            private static final int SUMMONS_CHOICE = 2;
            private Loot loot;
            private Voices voices;
            private Sequence sequence;
            private Summons summons;
            private ChoiceInner choice;

            private void setChoiceSelect(int choice) {
                if (choiceSelect == -1) {
                    choiceSelect = choice;
                } else if (choiceSelect != choice) {
                    throw new IllegalStateException(
                            "Need to call clearChoiceSelect() before changing existing choice");
                }
            }

            /** 
             * Clear the choice selection.
             */
            public void clearChoiceSelect() {
                choiceSelect = -1;
            }

            /** 
             * Check if Loot is current selection for choice.
             * 
             * @return <code>true</code> if selection, <code>false</code> if not
             */
            public boolean ifLoot() {
                return choiceSelect == LOOT_CHOICE;
            }

            /** 
             * Get the 'loot' element value.
             * 
             * @return value
             */
            public Loot getLoot() {
                return loot;
            }

            /** 
             * Set the 'loot' element value.
             * 
             * @param loot
             */
            public void setLoot(Loot loot) {
                setChoiceSelect(LOOT_CHOICE);
                this.loot = loot;
            }

            /** 
             * Check if Voices is current selection for choice.
             * 
             * @return <code>true</code> if selection, <code>false</code> if not
             */
            public boolean ifVoices() {
                return choiceSelect == VOICES_CHOICE;
            }

            /** 
             * Get the 'voices' element value.
             * 
             * @return value
             */
            public Voices getVoices() {
                return voices;
            }

            /** 
             * Set the 'voices' element value.
             * 
             * @param voices
             */
            public void setVoices(Voices voices) {
                setChoiceSelect(VOICES_CHOICE);
                this.voices = voices;
            }

            /** 
             * Get the sequence value.
             * 
             * @return value
             */
            public Sequence getSequence() {
                return sequence;
            }

            /** 
             * Set the sequence value.
             * 
             * @param sequence
             */
            public void setSequence(Sequence sequence) {
                setChoiceSelect(VOICES_CHOICE);
                this.sequence = sequence;
            }

            /** 
             * Check if Summons is current selection for choice.
             * 
             * @return <code>true</code> if selection, <code>false</code> if not
             */
            public boolean ifSummons() {
                return choiceSelect == SUMMONS_CHOICE;
            }

            /** 
             * Get the 'summons' element value.
             * 
             * @return value
             */
            public Summons getSummons() {
                return summons;
            }

            /** 
             * Set the 'summons' element value.
             * 
             * @param summons
             */
            public void setSummons(Summons summons) {
                setChoiceSelect(SUMMONS_CHOICE);
                this.summons = summons;
            }

            /** 
             * Get the choice value.
             * 
             * @return value
             */
            public ChoiceInner getChoice() {
                return choice;
            }

            /** 
             * Set the choice value.
             * 
             * @param choice
             */
            public void setChoice(ChoiceInner choice) {
                setChoiceSelect(SUMMONS_CHOICE);
                this.choice = choice;
            }
            /** 
             * Schema fragment(s) for this class:
             * <pre>
             * &lt;xs:sequence xmlns:xs="http://www.w3.org/2001/XMLSchema" minOccurs="0">
             *   &lt;xs:element ref="summons" minOccurs="0"/>
             *   &lt;xs:element ref="loot"/>
             * &lt;/xs:sequence>
             * </pre>
             */
            public static class Sequence
            {
                private Summons summons;
                private Loot loot;

                /** 
                 * Get the 'summons' element value.
                 * 
                 * @return value
                 */
                public Summons getSummons() {
                    return summons;
                }

                /** 
                 * Set the 'summons' element value.
                 * 
                 * @param summons
                 */
                public void setSummons(Summons summons) {
                    this.summons = summons;
                }

                /** 
                 * Get the 'loot' element value.
                 * 
                 * @return value
                 */
                public Loot getLoot() {
                    return loot;
                }

                /** 
                 * Set the 'loot' element value.
                 * 
                 * @param loot
                 */
                public void setLoot(Loot loot) {
                    this.loot = loot;
                }
            }
            /** 
             * Schema fragment(s) for this class:
             * <pre>
             * &lt;xs:choice xmlns:xs="http://www.w3.org/2001/XMLSchema" minOccurs="0">
             *   &lt;xs:element ref="loot"/>
             *   &lt;xs:sequence>
             *     &lt;xs:element ref="voices"/>
             *     &lt;xs:element ref="loot" minOccurs="0"/>
             *   &lt;/xs:sequence>
             * &lt;/xs:choice>
             * </pre>
             */
            public static class ChoiceInner
            {
                private int choiceSelect = -1;
                private static final int LOOT_CHOICE = 0;
                private static final int VOICES_CHOICE = 1;
                private Loot loot;
                private Voices voices;
                private Loot loot1;

                private void setChoiceSelect(int choice) {
                    if (choiceSelect == -1) {
                        choiceSelect = choice;
                    } else if (choiceSelect != choice) {
                        throw new IllegalStateException(
                                "Need to call clearChoiceSelect() before changing existing choice");
                    }
                }

                /** 
                 * Clear the choice selection.
                 */
                public void clearChoiceSelect() {
                    choiceSelect = -1;
                }

                /** 
                 * Check if Loot is current selection for choice.
                 * 
                 * @return <code>true</code> if selection, <code>false</code> if not
                 */
                public boolean ifLoot() {
                    return choiceSelect == LOOT_CHOICE;
                }

                /** 
                 * Get the 'loot' element value.
                 * 
                 * @return value
                 */
                public Loot getLoot() {
                    return loot;
                }

                /** 
                 * Set the 'loot' element value.
                 * 
                 * @param loot
                 */
                public void setLoot(Loot loot) {
                    setChoiceSelect(LOOT_CHOICE);
                    this.loot = loot;
                }

                /** 
                 * Check if Voices is current selection for choice.
                 * 
                 * @return <code>true</code> if selection, <code>false</code> if not
                 */
                public boolean ifVoices() {
                    return choiceSelect == VOICES_CHOICE;
                }

                /** 
                 * Get the 'voices' element value.
                 * 
                 * @return value
                 */
                public Voices getVoices() {
                    return voices;
                }

                /** 
                 * Set the 'voices' element value.
                 * 
                 * @param voices
                 */
                public void setVoices(Voices voices) {
                    setChoiceSelect(VOICES_CHOICE);
                    this.voices = voices;
                }

                /** 
                 * Get the 'loot' element value.
                 * 
                 * @return value
                 */
                public Loot getLoot1() {
                    return loot1;
                }

                /** 
                 * Set the 'loot' element value.
                 * 
                 * @param loot1
                 */
                public void setLoot1(Loot loot1) {
                    setChoiceSelect(VOICES_CHOICE);
                    this.loot1 = loot1;
                }
            }
        }
    }
    /** 
     * Schema fragment(s) for this class:
     * <pre>
     * &lt;xs:choice xmlns:xs="http://www.w3.org/2001/XMLSchema" minOccurs="0">
     *   &lt;xs:element ref="voices"/>
     *   &lt;xs:sequence>
     *     &lt;xs:element ref="immunities"/>
     *     &lt;xs:element ref="summons" minOccurs="0"/>
     *     &lt;xs:element ref="voices"/>
     *   &lt;/xs:sequence>
     * &lt;/xs:choice>
     * </pre>
     */
    public static class Choice3
    {
        private int choice3Select = -1;
        private static final int VOICES_CHOICE = 0;
        private static final int IMMUNITIES_CHOICE = 1;
        private Voices voices;
        private Immunities immunities;
        private Summons summons;
        private Voices voices1;

        private void setChoice3Select(int choice) {
            if (choice3Select == -1) {
                choice3Select = choice;
            } else if (choice3Select != choice) {
                throw new IllegalStateException(
                        "Need to call clearChoice3Select() before changing existing choice");
            }
        }

        /** 
         * Clear the choice selection.
         */
        public void clearChoice3Select() {
            choice3Select = -1;
        }

        /** 
         * Check if Voices is current selection for choice.
         * 
         * @return <code>true</code> if selection, <code>false</code> if not
         */
        public boolean ifVoices() {
            return choice3Select == VOICES_CHOICE;
        }

        /** 
         * Get the 'voices' element value.
         * 
         * @return value
         */
        public Voices getVoices() {
            return voices;
        }

        /** 
         * Set the 'voices' element value.
         * 
         * @param voices
         */
        public void setVoices(Voices voices) {
            setChoice3Select(VOICES_CHOICE);
            this.voices = voices;
        }

        /** 
         * Check if Immunities is current selection for choice.
         * 
         * @return <code>true</code> if selection, <code>false</code> if not
         */
        public boolean ifImmunities() {
            return choice3Select == IMMUNITIES_CHOICE;
        }

        /** 
         * Get the 'immunities' element value.
         * 
         * @return value
         */
        public Immunities getImmunities() {
            return immunities;
        }

        /** 
         * Set the 'immunities' element value.
         * 
         * @param immunities
         */
        public void setImmunities(Immunities immunities) {
            setChoice3Select(IMMUNITIES_CHOICE);
            this.immunities = immunities;
        }

        /** 
         * Get the 'summons' element value.
         * 
         * @return value
         */
        public Summons getSummons() {
            return summons;
        }

        /** 
         * Set the 'summons' element value.
         * 
         * @param summons
         */
        public void setSummons(Summons summons) {
            setChoice3Select(IMMUNITIES_CHOICE);
            this.summons = summons;
        }

        /** 
         * Get the 'voices' element value.
         * 
         * @return value
         */
        public Voices getVoices1() {
            return voices1;
        }

        /** 
         * Set the 'voices' element value.
         * 
         * @param voices1
         */
        public void setVoices1(Voices voices1) {
            setChoice3Select(IMMUNITIES_CHOICE);
            this.voices1 = voices1;
        }
    }
    /** 
     * Schema fragment(s) for this class:
     * <pre>
     * &lt;xs:simpleType xmlns:xs="http://www.w3.org/2001/XMLSchema">
     *   &lt;xs:restriction base="xs:string">
     *     &lt;xs:enumeration value="blood"/>
     *     &lt;xs:enumeration value="energy"/>
     *     &lt;xs:enumeration value="fire"/>
     *     &lt;xs:enumeration value="undead"/>
     *     &lt;xs:enumeration value="venom"/>
     *   &lt;/xs:restriction>
     * &lt;/xs:simpleType>
     * </pre>
     */
    public static enum Race {
        BLOOD("blood"), ENERGY("energy"), FIRE("fire"), UNDEAD("undead"), VENOM(
                "venom");
        private final String value;

        private Race(String value) {
            this.value = value;
        }

        public String xmlValue() {
            return value;
        }

        public static Race convert(String value) {
            for (Race inst : values()) {
                if (inst.xmlValue().equals(value)) {
                    return inst;
                }
            }
            return null;
        }
    }
}
