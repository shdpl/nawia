/*******************************************************************************
 * Copyright (C) 2010 Mariusz 'shd' Gliwiński.
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 * 
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ******************************************************************************/
package net.nawia.gsao.server.model;

import java.util.HashSet;
import java.util.Set;
import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.FetchType;
import javax.persistence.Id;
import javax.persistence.OneToMany;
import javax.persistence.Table;

import net.nawia.gsao.server.model.MapStore;

/**
 * House of {@link Player}
 */
@Entity
@Table(name = "houses", schema = "public")
public class House implements java.io.Serializable {

	/**
	 * 
	 */
	private static final long serialVersionUID = 7047619037196401079L;
	
	
	private int id;
	private int townid;
	private String name;
	private int rent;
	private short guildhall;
	private int tiles;
	private int doors;
	private int beds;
	private int owner;
	private long paid;
	private short clear;
	private int warnings;
	private long lastwarning;
	private Set<HouseAuction> houseAuctions = new HashSet<HouseAuction>(0);
	private Set<MapStore> mapStores = new HashSet<MapStore>(0);
	private Set<HouseList> houseLists = new HashSet<HouseList>(0);
	private Set<Tile> tiles_1 = new HashSet<Tile>(0);

	public House() {
	}

	public House(int id, int townid, String name, int rent, short guildhall,
			int tiles, int doors, int beds, int owner, long paid, short clear,
			int warnings, long lastwarning) {
		this.id = id;
		this.townid = townid;
		this.name = name;
		this.rent = rent;
		this.guildhall = guildhall;
		this.tiles = tiles;
		this.doors = doors;
		this.beds = beds;
		this.owner = owner;
		this.paid = paid;
		this.clear = clear;
		this.warnings = warnings;
		this.lastwarning = lastwarning;
	}

	public House(int id, int townid, String name, int rent, short guildhall,
			int tiles, int doors, int beds, int owner, long paid, short clear,
			int warnings, long lastwarning, Set<HouseAuction> houseAuctions,
			Set<MapStore> mapStores, Set<HouseList> houseLists,
			Set<Tile> tiles_1) {
		this.id = id;
		this.townid = townid;
		this.name = name;
		this.rent = rent;
		this.guildhall = guildhall;
		this.tiles = tiles;
		this.doors = doors;
		this.beds = beds;
		this.owner = owner;
		this.paid = paid;
		this.clear = clear;
		this.warnings = warnings;
		this.lastwarning = lastwarning;
		this.houseAuctions = houseAuctions;
		this.mapStores = mapStores;
		this.houseLists = houseLists;
		this.tiles_1 = tiles_1;
	}

	@Id
	@Column(name = "id", unique = true, nullable = false)
	public int getId() {
		return this.id;
	}

	public void setId(int id) {
		this.id = id;
	}

	@Column(name = "townid", nullable = false)
	public int getTownid() {
		return this.townid;
	}

	public void setTownid(int townid) {
		this.townid = townid;
	}

	@Column(name = "name", nullable = false, length = 100)
	public String getName() {
		return this.name;
	}

	public void setName(String name) {
		this.name = name;
	}

	@Column(name = "rent", nullable = false)
	public int getRent() {
		return this.rent;
	}

	public void setRent(int rent) {
		this.rent = rent;
	}

	@Column(name = "guildhall", nullable = false)
	public short getGuildhall() {
		return this.guildhall;
	}

	public void setGuildhall(short guildhall) {
		this.guildhall = guildhall;
	}

	@Column(name = "tiles", nullable = false)
	public int getTiles() {
		return this.tiles;
	}

	public void setTiles(int tiles) {
		this.tiles = tiles;
	}

	@Column(name = "doors", nullable = false)
	public int getDoors() {
		return this.doors;
	}

	public void setDoors(int doors) {
		this.doors = doors;
	}

	@Column(name = "beds", nullable = false)
	public int getBeds() {
		return this.beds;
	}

	public void setBeds(int beds) {
		this.beds = beds;
	}

	@Column(name = "owner", nullable = false)
	public int getOwner() {
		return this.owner;
	}

	public void setOwner(int owner) {
		this.owner = owner;
	}

	@Column(name = "paid", nullable = false)
	public long getPaid() {
		return this.paid;
	}

	public void setPaid(long paid) {
		this.paid = paid;
	}

	@Column(name = "clear", nullable = false)
	public short getClear() {
		return this.clear;
	}

	public void setClear(short clear) {
		this.clear = clear;
	}

	@Column(name = "warnings", nullable = false)
	public int getWarnings() {
		return this.warnings;
	}

	public void setWarnings(int warnings) {
		this.warnings = warnings;
	}

	@Column(name = "lastwarning", nullable = false)
	public long getLastwarning() {
		return this.lastwarning;
	}

	public void setLastwarning(long lastwarning) {
		this.lastwarning = lastwarning;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "house")
	public Set<HouseAuction> getHouseAuctions() {
		return this.houseAuctions;
	}

	public void setHouseAuctions(Set<HouseAuction> houseAuctions) {
		this.houseAuctions = houseAuctions;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "house")
	public Set<MapStore> getMapStores() {
		return this.mapStores;
	}

	public void setMapStores(Set<MapStore> mapStores) {
		this.mapStores = mapStores;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "house")
	public Set<HouseList> getHouseLists() {
		return this.houseLists;
	}

	public void setHouseLists(Set<HouseList> houseLists) {
		this.houseLists = houseLists;
	}

	@OneToMany(fetch = FetchType.LAZY, mappedBy = "house")
	public Set<Tile> getTiles_1() {
		return this.tiles_1;
	}

	public void setTiles_1(Set<Tile> tiles_1) {
		this.tiles_1 = tiles_1;
	}

}
