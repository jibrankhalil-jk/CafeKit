-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: Apr 24, 2024 at 09:35 AM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `cafekit`
--

-- --------------------------------------------------------

--
-- Table structure for table `admins`
--

CREATE TABLE `admins` (
  `aid` int(11) NOT NULL,
  `name` varchar(50) NOT NULL,
  `email` varchar(50) NOT NULL,
  `password_hash` varchar(32) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- --------------------------------------------------------

--
-- Table structure for table `food_categories`
--

CREATE TABLE `food_categories` (
  `cid` int(11) NOT NULL,
  `category_name` varchar(50) NOT NULL,
  `items` longtext CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL CHECK (json_valid(`items`))
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- --------------------------------------------------------

--
-- Table structure for table `food_category`
--

CREATE TABLE `food_category` (
  `id` int(11) NOT NULL,
  `name` varchar(40) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Dumping data for table `food_category`
--

INSERT INTO `food_category` (`id`, `name`) VALUES
(1, 'Breakfast Items'),
(2, 'Lunch Items'),
(3, 'Diner Items'),
(4, 'Other Items'),
(5, 'Stationery'),
(6, 'Drinks'),
(7, 'Snacks'),
(8, 'Sandwiches and Wraps'),
(9, 'Salads'),
(10, 'Soups and Chili'),
(11, 'Pizza and Pasta'),
(12, 'Burgers and Fries'),
(13, 'Vegetarian'),
(14, 'Fresh Fruit and Yogurt Parfaits'),
(15, 'Desserts'),
(16, 'Smoothies'),
(17, 'Grab-and-Go Meals'),
(18, 'Dairy-Free Alternatives'),
(19, 'Daily Specials');

-- --------------------------------------------------------

--
-- Table structure for table `food_items`
--

CREATE TABLE `food_items` (
  `fid` int(11) NOT NULL,
  `food_name` varchar(50) NOT NULL,
  `quantity` int(11) NOT NULL,
  `size` varchar(20) DEFAULT NULL,
  `category` int(11) NOT NULL,
  `price` smallint(6) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Dumping data for table `food_items`
--

INSERT INTO `food_items` (`fid`, `food_name`, `quantity`, `size`, `category`, `price`) VALUES
(1, 'Tea', 1, NULL, 1, 50),
(2, 'Burger', 1, 'small', 3, 250),
(4, 'Samosa normal', 1, 'Normal', 7, 25),
(6, 'books', 1, 'normal', 1, 1222),
(9, 'name', 1, 'small', 1, 222);

-- --------------------------------------------------------

--
-- Table structure for table `orders`
--

CREATE TABLE `orders` (
  `oid` int(11) NOT NULL,
  `order_by` bigint(20) NOT NULL,
  `items` longtext CHARACTER SET utf8mb4 COLLATE utf8mb4_bin NOT NULL CHECK (json_valid(`items`)),
  `total_charges` smallint(6) NOT NULL,
  `date_time` datetime NOT NULL DEFAULT current_timestamp(),
  `paid` tinyint(1) NOT NULL DEFAULT 0
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Dumping data for table `orders`
--

INSERT INTO `orders` (`oid`, `order_by`, `items`, `total_charges`, `date_time`, `paid`) VALUES
(1000101, 7140200000000, '[10,11,12,13,14]', 12000, '2024-03-26 14:35:03', 0),
(1000102, 7140200000001, '[10]', 12000, '2024-03-26 14:35:03', 0),
(1000103, 7140200000011, '[1,2,3]', 122, '2024-04-21 11:10:48', 0);

-- --------------------------------------------------------

--
-- Table structure for table `transaction`
--

CREATE TABLE `transaction` (
  `tid` int(11) NOT NULL,
  `type` varchar(50) NOT NULL,
  `sent_by` varchar(14) NOT NULL,
  `amount` smallint(6) NOT NULL,
  `date_time` datetime NOT NULL DEFAULT current_timestamp(),
  `order_no` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

CREATE TABLE `users` (
  `nic` bigint(20) NOT NULL,
  `email` varchar(50) DEFAULT NULL,
  `user_name` varchar(50) NOT NULL,
  `roll_no` varchar(10) NOT NULL,
  `pin_hash` varchar(32) NOT NULL,
  `daily_limit` smallint(6) NOT NULL DEFAULT 800,
  `monthly_limit` smallint(6) NOT NULL DEFAULT 15000,
  `account_status` tinyint(1) NOT NULL DEFAULT 0,
  `phone_number` varchar(11) NOT NULL,
  `loan_status` tinyint(1) NOT NULL DEFAULT 0,
  `profile_pic` longblob DEFAULT NULL,
  `datetime` datetime DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`nic`, `email`, `user_name`, `roll_no`, `pin_hash`, `daily_limit`, `monthly_limit`, `account_status`, `phone_number`, `loan_status`, `profile_pic`, `datetime`) VALUES
(7140200000000, NULL, 'Ali ahmed', '23p1234', '', 800, 15000, 0, '03100000000', 0, NULL, '2024-04-22 20:20:35'),
(7140299999999, NULL, 'jibran khalil', '23p0030', '', 800, 15000, 0, '03100000000', 0, 0xffd8ffe000104a46494600010100006400640000ffdb004300080606070605080707070909080a0c140d0c0b0b0c1912130f141d1a1f1e1d1a1c1c20242e2720222c231c1c2837292c30313434341f27393d38323c2e333432ffc2000b0800c800c801011100ffc4001b00010002030101000000000000000000000005060204070103ffda0008010100000000ee400631fbf98000018e4000000000006bfc2b98d82500001f1a4c104d5e3ee0002975a0267a00000e6d1e065d5720003986a80eabf40002870406df4e00031e731c049f45f40018f2bc00cbaae400051204095e8800030e6fa219f4bdb0000aad402c9750000477370e9320000082a185fe6800021297aa1b5749b000d2afc24700484e5837404256623c000f65ecf34158a68000173b31e72fd70000363a87a8ee6e00001d224559a6000005cecca357c00002c179733d300000dce99fffc400381000010302020607050803000000000000010203040511002106121331407120223041425191101423528132616282a1c1e1f15053b1ffda0008010100013f00ecdc59422e13ac6f6b605581bd99eb0f0eb8c34b52db0a527555de2f7b70e403bf1b347c89f4c0006eff001eba8436dcd45ca652bf22b17c4fac43a73416eba14542e94a332ac48d3290a51f778cda13f8c9270c6994a4a86de3b4b4fe1b83881a41027d9297766e9f03991fa79f072a5330e3a9f7d610da779c55b49644e25a8e4b2c6eb03d65733839efc124ef24f4297a472e0292dbaa2f31f2a8e6391c4398c4e8e97e3ac2907d41f23c0e97cd5393510d27a8d275943cd47f8ec346aa0b87544344fc27cea28775fb8f035c70bb5b96a3fec23d32ec1b596dd42c6f4a811842b5db4abcc03c054d2a4d525056fdaaafebd80de06180531da0778401fa701a5713ddeae5d03a8fa75bebb8f614b8c6654e3b1dca58bf2199e016a0842967724127155ac48aa3a769aa1a4a894240fb3f5ec2853d8a6d436ef36a58b6a8b786fdf84a829214371171dbb88d76d68f9811875b2d3cb6d42c50a293f4ec1092b71281bd440186d3a8d211f2a40e034aa088d520fa0590f8bfe6efec34761999586ae2e86be22be9bbf5e056d36edb6884aec6e3585ed8ac45f73ab4866d64eb6b2791cc7499694f3c86902ea5a8240e78814d8b4f410c34942940052877db82d3183ac86a7207d9ea2f9771e9689d34bd28ce713f0dac917ef57f1c1d7ac2872f5802353a5430914489aa001b31bbcf83d2b949628e5abf5de50481f70ccf4b45a525fa321b07aec92923fe7024d862a7a4b1208521a21f7be549c873389f509151905e90bb9dc00dc91e43a502a1229cfed63aec7c493b943efc53349a24e01b78861ef251ea9e471cbb5995685007c77d215f20cd5e9895a67994c48bf99c3fb0c4dadd4275c3af9083e04643b2855b9f02c1a7c940f02fac31174cf309971bf3367f6388555853c0d83e92af90e4af4ec6a1a4f0a1294db64bee8cac8dc0f3c4ed25a84cba52bd8367c2de47d704951249249de4f6c0949041208dc4620e92d421d92a736ed8f0b999f5c53f49e0cd296d64b0e9cacbdc4f3e969556151d220c75d96b177143781e5c268b561721260c856b2d02eda8f78f2e82941292a39002e713e49993de7d47edac91cbbb84812550e7b1213bd0b04f2efc2541490a1b88b8f6d7647bb51a4ac1b129d51cce5c350e47bd51a3384dc84ea9e632f6e9948d484c300e6b5eb1e43fbe1b43646bc17d82736d7ac391febdba5d236b564b57c9a6c0fa9cf86d107f67565344e4eb647d467edab3c64d5a53bdc5c20721962d8b62d8b62d8b62d8b62d8b62d8b62d8b62d8b62d8b62d8b62d8a43deed568aef707003c8e5ecffd9, '2024-04-22 20:20:35');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `admins`
--
ALTER TABLE `admins`
  ADD PRIMARY KEY (`aid`);

--
-- Indexes for table `food_categories`
--
ALTER TABLE `food_categories`
  ADD PRIMARY KEY (`cid`);

--
-- Indexes for table `food_category`
--
ALTER TABLE `food_category`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `food_items`
--
ALTER TABLE `food_items`
  ADD PRIMARY KEY (`fid`);

--
-- Indexes for table `orders`
--
ALTER TABLE `orders`
  ADD PRIMARY KEY (`oid`);

--
-- Indexes for table `transaction`
--
ALTER TABLE `transaction`
  ADD PRIMARY KEY (`tid`);

--
-- Indexes for table `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`nic`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `admins`
--
ALTER TABLE `admins`
  MODIFY `aid` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `food_categories`
--
ALTER TABLE `food_categories`
  MODIFY `cid` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table `food_category`
--
ALTER TABLE `food_category`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=59;

--
-- AUTO_INCREMENT for table `food_items`
--
ALTER TABLE `food_items`
  MODIFY `fid` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=10;

--
-- AUTO_INCREMENT for table `orders`
--
ALTER TABLE `orders`
  MODIFY `oid` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=1000104;

--
-- AUTO_INCREMENT for table `transaction`
--
ALTER TABLE `transaction`
  MODIFY `tid` int(11) NOT NULL AUTO_INCREMENT;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
