package net.nawia.gsao.service;

import java.util.Date;

import net.nawia.gsao.service.exception.ExceptionServiceHouse;

public interface ServiceHouse {

	/**
	 * Returns address of House
	 * 
	 * @param hid
	 *            House ID
	 * @return address
	 * @throws ExceptionServiceHouse
	 *             when Address could not be retrieved
	 */
	//Address getAddress(int hid) throws ExceptionServiceHouse;

	/**
	 * Returns unique House name
	 * 
	 * @param hid
	 *            House ID
	 * @return Unique name assigned to House
	 * @throws ExceptionServiceHouse
	 *             when Name could not be retrieved
	 */
	String getName(int hid) throws ExceptionServiceHouse;

	/**
	 * Sets unique House name
	 * 
	 * @param hid
	 *            House ID
	 * @param name
	 *            name for house
	 * @return
	 * @throws ExceptionServiceHouse
	 *             when cannot change House name
	 */
	boolean setName(int hid, String name) throws ExceptionServiceHouse;

	/**
	 * Returns 3D model of House object
	 * 
	 * @param hid
	 *            House ID
	 * @return House 3D model
	 * @throws ExceptionServiceHouse
	 *             when cannot find House 3D model
	 */
	//Model3D getModel(int hid) throws ExceptionServiceHouse;

	/**
	 * Returns 3 dimensional Rectangle, that surrounds House
	 * 
	 * @param hid
	 *            House ID
	 * @return 3 dimensional with Map positions
	 * @throws ExceptionServiceHouse
	 *             when bounding box cannot be retrieved
	 */
	//TODO: deferred Rectangle3D getBoundingBox(int hid) throws ExceptionServiceHouse;

	/**
	 * Returns list of images with top-view House plan
	 * 
	 * @param hid
	 *            House ID
	 * @return Map floor=>plan image
	 * @throws ExceptionServiceHouse
	 *             when problem with retrieving plans occurs
	 */
	//TODO: deferred Map<Integer, Image> getPlan(int hid) throws ExceptionServiceHouse;

	/**
	 * Retrieves number of beds in House
	 * 
	 * @param hid
	 *            House ID
	 * @return number of beds
	 * @throws ExceptionSerciceHouse
	 *             if number cannot be retrieved
	 */
	int getBeds(int hid) throws ExceptionServiceHouse;

	/**
	 * Retrieves size of chosen House
	 * 
	 * @param hid
	 *            House ID
	 * @return house size in square meters
	 * @throws ExceptionServiceHouse
	 */
	float getSize(int hid) throws ExceptionServiceHouse;

	/**
	 * Retrieves House owner
	 * 
	 * @param hid
	 *            House ID
	 * @return Player ID
	 * @throws ExceptionServiceHouse
	 *             when problem with determining owner occurs
	 */
	int getOwner(int hid) throws ExceptionServiceHouse;

	/**
	 * Retrieves monthly rent, for owning this House
	 * 
	 * @param hid
	 *            House ID
	 * @return amount of money, that has to be paid for this house every month
	 * @throws ExceptionServiceHouse
	 *             when cannot determine rent
	 */
	float getRent(int hid) throws ExceptionServiceHouse;

	/**
	 * Retrieves date, until which House is already paid
	 * 
	 * @param hid
	 *            House ID
	 * @return Date, until which this House is paid
	 * @throws ExceptionServiceHouse
	 */
	Date getPaid(int hid) throws ExceptionServiceHouse;

	/**
	 * Sells House under conditions described by OfferHouse of choice
	 * @param hid House ID
	 * @param oid Offer ID
	 * @return Transaction ID
	 * @throws ExceptionOfferNotExists Offer doesn't exists or isn't actual
	 * @throws ExceptionServiceHouse Problem during transaction
	 */
	//TODO: deferred int doSell(int hid, int oid) throws ExceptionOfferNotExists, ExceptionServiceHouse;

	/**
	 * Buys House by Player
	 * @param hid House ID
	 * @param pid Player ID
	 * @return Transaction ID
	 * @throws ExceptionPlayerOutOfMoney if Player have not enough money
	 * @throws ExceptionHouseBusy when is already engaged, and owner isn't selling it
	 * @throws ExceptionServiceHouse while other problem occurred during House buying procedure
	 */
	//TODO: deferred int doBuy(int hid, int pid) throws ExceptionPlayerOutOfMoney,
	//		ExceptionHouseBusy, ExceptionServiceHouse;
}
