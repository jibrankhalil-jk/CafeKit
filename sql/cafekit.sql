-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Generation Time: May 11, 2024 at 04:03 PM
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
  `id` varchar(20) NOT NULL,
  `password` varchar(32) NOT NULL,
  `name` varchar(50) NOT NULL,
  `email` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Dumping data for table `admins`
--

INSERT INTO `admins` (`aid`, `id`, `password`, `name`, `email`) VALUES
(1, 'admin', 'admin', 'admin', 'admincafekit@gmail.com');

-- --------------------------------------------------------

--
-- Table structure for table `food_items`
--

CREATE TABLE `food_items` (
  `fid` int(11) NOT NULL,
  `food_name` varchar(50) NOT NULL,
  `quantity` int(11) NOT NULL,
  `size` varchar(20) DEFAULT NULL,
  `price` smallint(6) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Dumping data for table `food_items`
--

INSERT INTO `food_items` (`fid`, `food_name`, `quantity`, `size`, `price`) VALUES
(1, 'tea', 1, 'medium', 50),
(2, 'burger s', 1, 'small', 250),
(4, 'samosa s', 1, 'small', 25),
(12, 'burger l', 1, 'large', 400),
(13, 'apple', 1, 'medium', 80);

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
(1000112, 1111111111111, '[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]', 1500, '2024-05-11 14:46:09', 1),
(1000114, 3333333333333, '[12,2]', 550, '2024-05-11 16:00:34', 1),
(1000115, 1111111111111, '[2,12]', 650, '2024-05-11 18:48:41', 1);

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

CREATE TABLE `users` (
  `nic` bigint(20) NOT NULL,
  `email` varchar(50) DEFAULT NULL,
  `user_name` varchar(50) NOT NULL,
  `roll_no` varchar(10) NOT NULL,
  `account_status` tinyint(1) NOT NULL DEFAULT 0,
  `phone_number` varchar(11) NOT NULL,
  `datetime` datetime DEFAULT current_timestamp()
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`nic`, `email`, `user_name`, `roll_no`, `account_status`, `phone_number`, `datetime`) VALUES
(1111111111111, 'admincafekit@gmail.com', 'jibran khalil', '23p0030', 1, '123123123', '2024-05-11 14:36:47'),
(2222222222222, 'admincafekit@gmail.com', 'Abbas Khan', '23p7983', 1, '03100000000', '2024-05-11 14:38:16'),
(3333333333333, 'admincafekit@gmail.com', 'Asaf Khan', '23p1230', 1, '03100000000', '2024-05-11 14:37:23');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `admins`
--
ALTER TABLE `admins`
  ADD PRIMARY KEY (`aid`);

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
  MODIFY `aid` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT for table `food_items`
--
ALTER TABLE `food_items`
  MODIFY `fid` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=14;

--
-- AUTO_INCREMENT for table `orders`
--
ALTER TABLE `orders`
  MODIFY `oid` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=1000116;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
