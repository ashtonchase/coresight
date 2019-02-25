----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 02/24/2019 08:42:17 PM
-- Design Name: 
-- Module Name: trace_2_axis - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: 
-- 
-- Dependencies: 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
----------------------------------------------------------------------------------


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity trace_2_axis is
    Port (
           trace_data : in STD_LOGIC_VECTOR (31 downto 0);
           m_axis_aclk : in STD_LOGIC;
           m_axis_aresetn : in STD_LOGIC;
           m_axis_tdata : out STD_LOGIC_VECTOR (31 downto 0);
           m_axis_tkeep : out STD_LOGIC_VECTOR (3 downto 0);
           m_axis_tvalid : out STD_LOGIC;
           m_axis_tlast : out STD_LOGIC;
           m_axis_tready : in STD_LOGIC;
           trace_ctl : in STD_LOGIC);
end trace_2_axis;

architecture Behavioral of trace_2_axis is

begin

m_axis_tvalid <= not trace_ctl;

m_axis_tkeep <= "1111";
m_axis_tlast <= '1';
m_axis_tdata <= trace_data when rising_edge(m_axis_aclk); 



end Behavioral;
