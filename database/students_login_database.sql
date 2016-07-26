-- phpMyAdmin SQL Dump
-- version 4.5.5.1
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: Jul 26, 2016 at 10:22 AM
-- Server version: 5.7.11
-- PHP Version: 5.6.19

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `online-quiz`
--
CREATE DATABASE IF NOT EXISTS `online-quiz` DEFAULT CHARACTER SET latin1 COLLATE latin1_swedish_ci;
USE `online-quiz`;

-- --------------------------------------------------------

--
-- Table structure for table `answer_list`
--

CREATE TABLE `answer_list` (
  `answer_id` int(11) NOT NULL,
  `answer_msg` text NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `answer_list`
--

INSERT INTO `answer_list` (`answer_id`, `answer_msg`) VALUES
(1, 'option 1'),
(2, 'option 2'),
(3, 'option 3'),
(4, 'option 4'),
(5, 'option 6'),
(7, 'option 8'),
(9, 'option 9'),
(10, 'option 10'),
(11, 'option 11'),
(12, 'option 12'),
(13, 'option 13'),
(14, 'option 14'),
(15, 'option 15'),
(16, 'option 16');

-- --------------------------------------------------------

--
-- Table structure for table `options`
--

CREATE TABLE `options` (
  `answer_id` int(11) NOT NULL,
  `question_id` int(11) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `options`
--

INSERT INTO `options` (`answer_id`, `question_id`) VALUES
(1, 1),
(2, 1),
(3, 2),
(4, 2),
(5, 2),
(6, 3),
(7, 3),
(8, 3),
(9, 4),
(10, 4),
(11, 5),
(12, 5),
(13, 6),
(14, 6),
(15, 1),
(16, 1);

-- --------------------------------------------------------

--
-- Table structure for table `question_list`
--

CREATE TABLE `question_list` (
  `question_id` int(11) NOT NULL,
  `question_msg` text NOT NULL,
  `answer_id` int(11) NOT NULL,
  `quiz_id` int(11) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `question_list`
--

INSERT INTO `question_list` (`question_id`, `question_msg`, `answer_id`, `quiz_id`) VALUES
(1, 'This is a question. So, answer.', 1, 1),
(2, 'this is another question ?', 2, 1),
(3, 'some meaning-less quesiton?', 3, 1),
(4, 'bla bla bla lba bla bla ?', 4, 1),
(5, 'this is for quiz 2?', 5, 2),
(6, 'another question or quiz 2 angain?', 6, 2);

-- --------------------------------------------------------

--
-- Table structure for table `quiz_list`
--

CREATE TABLE `quiz_list` (
  `quiz_id` int(11) NOT NULL,
  `quiz_name` varchar(25) NOT NULL,
  `quiz_level` int(11) NOT NULL,
  `leacture_id` int(11) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `quiz_list`
--

INSERT INTO `quiz_list` (`quiz_id`, `quiz_name`, `quiz_level`, `leacture_id`) VALUES
(1, 'Quiz 1', 2, 1),
(2, 'Quiz 2', 3, 1);

-- --------------------------------------------------------

--
-- Table structure for table `score`
--

CREATE TABLE `score` (
  `student_id` int(11) NOT NULL,
  `quiz_id` int(11) NOT NULL,
  `score` int(11) NOT NULL,
  `total` int(11) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `score`
--

INSERT INTO `score` (`student_id`, `quiz_id`, `score`, `total`) VALUES
(1, 1, 3, 4),
(1, 2, 1, 2);

-- --------------------------------------------------------

--
-- Table structure for table `students_login`
--

CREATE TABLE `students_login` (
  `id` int(11) NOT NULL,
  `name` varchar(25) DEFAULT NULL,
  `email` varchar(25) NOT NULL,
  `pass` text NOT NULL,
  `dob` date DEFAULT NULL,
  `pref` varchar(5) NOT NULL,
  `address` text NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `students_login`
--

INSERT INTO `students_login` (`id`, `name`, `email`, `pass`, `dob`, `pref`, `address`) VALUES
(1, 'Aung', 'test@gmail.com', 'pass', '1992-11-01', 'mr', 'Mandalay');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `answer_list`
--
ALTER TABLE `answer_list`
  ADD PRIMARY KEY (`answer_id`),
  ADD UNIQUE KEY `answer_id` (`answer_id`);

--
-- Indexes for table `options`
--
ALTER TABLE `options`
  ADD PRIMARY KEY (`answer_id`,`question_id`);

--
-- Indexes for table `question_list`
--
ALTER TABLE `question_list`
  ADD PRIMARY KEY (`question_id`),
  ADD UNIQUE KEY `question_id` (`question_id`);

--
-- Indexes for table `quiz_list`
--
ALTER TABLE `quiz_list`
  ADD PRIMARY KEY (`quiz_id`),
  ADD UNIQUE KEY `quiz_id` (`quiz_id`);

--
-- Indexes for table `score`
--
ALTER TABLE `score`
  ADD PRIMARY KEY (`student_id`,`quiz_id`);

--
-- Indexes for table `students_login`
--
ALTER TABLE `students_login`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `id` (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `answer_list`
--
ALTER TABLE `answer_list`
  MODIFY `answer_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=17;
--
-- AUTO_INCREMENT for table `question_list`
--
ALTER TABLE `question_list`
  MODIFY `question_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;
--
-- AUTO_INCREMENT for table `quiz_list`
--
ALTER TABLE `quiz_list`
  MODIFY `quiz_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;
--
-- AUTO_INCREMENT for table `students_login`
--
ALTER TABLE `students_login`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
