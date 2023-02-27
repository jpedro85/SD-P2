<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_1" />
        <signal name="XLXN_2" />
        <signal name="XLXN_3" />
        <signal name="Q2">
        </signal>
        <signal name="XLXN_39" />
        <signal name="XLXN_6" />
        <signal name="XLXN_7" />
        <signal name="Q0">
        </signal>
        <signal name="Q1">
        </signal>
        <signal name="XLXN_11" />
        <signal name="XLXN_12" />
        <signal name="XLXN_60" />
        <signal name="XLXN_61" />
        <signal name="Ativar" />
        <signal name="XLXN_65" />
        <signal name="Saida" />
        <signal name="Clock" />
        <signal name="XLXN_68" />
        <signal name="XLXN_69" />
        <signal name="XLXN_72" />
        <signal name="XLXN_75" />
        <signal name="XLXN_78" />
        <signal name="XLXN_81" />
        <signal name="XLXN_29" />
        <signal name="XLXN_83" />
        <port polarity="Input" name="Ativar" />
        <port polarity="Output" name="Saida" />
        <port polarity="Input" name="Clock" />
        <blockdef name="ftc">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <rect width="256" x="64" y="-320" height="256" />
            <line x2="64" y1="-32" y2="-32" x1="192" />
            <line x2="192" y1="-64" y2="-32" x1="192" />
            <line x2="64" y1="-128" y2="-144" x1="80" />
            <line x2="80" y1="-112" y2="-128" x1="64" />
            <line x2="320" y1="-256" y2="-256" x1="384" />
            <line x2="64" y1="-256" y2="-256" x1="0" />
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
        </blockdef>
        <blockdef name="and2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-144" x1="64" />
        </blockdef>
        <blockdef name="inv">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="160" y1="-32" y2="-32" x1="224" />
            <line x2="128" y1="-64" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="0" x1="128" />
            <line x2="64" y1="0" y2="-64" x1="64" />
            <circle r="16" cx="144" cy="-32" />
        </blockdef>
        <block symbolname="ftc" name="XLXI_1">
            <blockpin signalname="XLXN_39" name="C" />
            <blockpin signalname="XLXN_60" name="CLR" />
            <blockpin signalname="XLXN_39" name="T" />
            <blockpin signalname="Q0" name="Q" />
        </block>
        <block symbolname="ftc" name="XLXI_2">
            <blockpin signalname="XLXN_39" name="C" />
            <blockpin signalname="XLXN_60" name="CLR" />
            <blockpin signalname="Q0" name="T" />
            <blockpin signalname="Q1" name="Q" />
        </block>
        <block symbolname="ftc" name="XLXI_3">
            <blockpin signalname="XLXN_39" name="C" />
            <blockpin signalname="XLXN_60" name="CLR" />
            <blockpin signalname="XLXN_1" name="T" />
            <blockpin signalname="Q2" name="Q" />
        </block>
        <block symbolname="and2" name="XLXI_4">
            <blockpin signalname="Q1" name="I0" />
            <blockpin signalname="Q0" name="I1" />
            <blockpin signalname="XLXN_1" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_5">
            <blockpin signalname="Saida" name="I0" />
            <blockpin signalname="XLXN_61" name="I1" />
            <blockpin signalname="XLXN_39" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_65">
            <blockpin signalname="Ativar" name="I0" />
            <blockpin signalname="Clock" name="I1" />
            <blockpin signalname="XLXN_61" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_68">
            <blockpin signalname="Ativar" name="I" />
            <blockpin signalname="XLXN_60" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_69">
            <blockpin signalname="XLXN_65" name="I" />
            <blockpin signalname="Saida" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_83">
            <blockpin signalname="XLXN_29" name="I0" />
            <blockpin signalname="Q2" name="I1" />
            <blockpin signalname="XLXN_65" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_84">
            <blockpin signalname="XLXN_83" name="I0" />
            <blockpin signalname="Q1" name="I1" />
            <blockpin signalname="XLXN_29" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_85">
            <blockpin signalname="Q0" name="I" />
            <blockpin signalname="XLXN_83" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1472" y="1136" name="XLXI_1" orien="R0" />
        <instance x="2032" y="1136" name="XLXI_2" orien="R0" />
        <instance x="2592" y="1136" name="XLXI_3" orien="R0" />
        <branch name="XLXN_1">
            <wire x2="2576" y1="592" y2="592" x1="2368" />
            <wire x2="2576" y1="592" y2="880" x1="2576" />
            <wire x2="2592" y1="880" y2="880" x1="2576" />
        </branch>
        <branch name="Q2">
            <wire x2="2992" y1="1424" y2="1424" x1="1488" />
            <wire x2="2992" y1="880" y2="880" x1="2976" />
            <wire x2="2992" y1="880" y2="1424" x1="2992" />
        </branch>
        <instance x="2112" y="688" name="XLXI_4" orien="R0" />
        <instance x="1120" y="800" name="XLXI_5" orien="R0" />
        <branch name="XLXN_39">
            <wire x2="1440" y1="704" y2="704" x1="1376" />
            <wire x2="2016" y1="704" y2="704" x1="1440" />
            <wire x2="2560" y1="704" y2="704" x1="2016" />
            <wire x2="2560" y1="704" y2="1008" x1="2560" />
            <wire x2="2592" y1="1008" y2="1008" x1="2560" />
            <wire x2="2016" y1="704" y2="1008" x1="2016" />
            <wire x2="2032" y1="1008" y2="1008" x1="2016" />
            <wire x2="1440" y1="704" y2="880" x1="1440" />
            <wire x2="1440" y1="880" y2="1008" x1="1440" />
            <wire x2="1472" y1="1008" y2="1008" x1="1440" />
            <wire x2="1472" y1="880" y2="880" x1="1440" />
        </branch>
        <branch name="Q0">
            <wire x2="1872" y1="880" y2="880" x1="1856" />
            <wire x2="1984" y1="880" y2="880" x1="1872" />
            <wire x2="2032" y1="880" y2="880" x1="1984" />
            <wire x2="1872" y1="880" y2="1200" x1="1872" />
            <wire x2="2048" y1="1200" y2="1200" x1="1872" />
            <wire x2="2048" y1="1200" y2="1328" x1="2048" />
            <wire x2="2112" y1="560" y2="560" x1="1984" />
            <wire x2="1984" y1="560" y2="880" x1="1984" />
            <wire x2="2048" y1="1328" y2="1328" x1="2032" />
        </branch>
        <branch name="Q1">
            <wire x2="2432" y1="1392" y2="1392" x1="1776" />
            <wire x2="2112" y1="624" y2="624" x1="2032" />
            <wire x2="2032" y1="624" y2="672" x1="2032" />
            <wire x2="2432" y1="672" y2="672" x1="2032" />
            <wire x2="2432" y1="672" y2="880" x1="2432" />
            <wire x2="2432" y1="880" y2="1392" x1="2432" />
            <wire x2="2432" y1="880" y2="880" x1="2416" />
        </branch>
        <branch name="XLXN_60">
            <wire x2="1408" y1="1136" y2="1136" x1="1360" />
            <wire x2="2000" y1="1136" y2="1136" x1="1408" />
            <wire x2="2592" y1="1136" y2="1136" x1="2000" />
            <wire x2="1472" y1="1104" y2="1104" x1="1408" />
            <wire x2="1408" y1="1104" y2="1136" x1="1408" />
            <wire x2="2032" y1="1104" y2="1104" x1="2000" />
            <wire x2="2000" y1="1104" y2="1136" x1="2000" />
            <wire x2="2592" y1="1104" y2="1136" x1="2592" />
        </branch>
        <branch name="XLXN_61">
            <wire x2="1120" y1="672" y2="672" x1="1088" />
        </branch>
        <instance x="832" y="768" name="XLXI_65" orien="R0" />
        <instance x="1136" y="1168" name="XLXI_68" orien="R0" />
        <branch name="Ativar">
            <wire x2="832" y1="704" y2="704" x1="432" />
            <wire x2="432" y1="704" y2="1136" x1="432" />
            <wire x2="1136" y1="1136" y2="1136" x1="432" />
            <wire x2="432" y1="1136" y2="1264" x1="432" />
        </branch>
        <instance x="1104" y="1104" name="XLXI_69" orien="R270" />
        <branch name="XLXN_65">
            <wire x2="1072" y1="1104" y2="1392" x1="1072" />
            <wire x2="1232" y1="1392" y2="1392" x1="1072" />
        </branch>
        <branch name="Saida">
            <wire x2="1072" y1="848" y2="848" x1="896" />
            <wire x2="1072" y1="848" y2="880" x1="1072" />
            <wire x2="1120" y1="736" y2="736" x1="1072" />
            <wire x2="1072" y1="736" y2="848" x1="1072" />
        </branch>
        <branch name="Clock">
            <wire x2="832" y1="640" y2="640" x1="800" />
        </branch>
        <iomarker fontsize="28" x="800" y="640" name="Clock" orien="R180" />
        <iomarker fontsize="28" x="432" y="1264" name="Ativar" orien="R90" />
        <branch name="XLXN_29">
            <wire x2="1520" y1="1360" y2="1360" x1="1488" />
        </branch>
        <iomarker fontsize="28" x="896" y="848" name="Saida" orien="R180" />
        <instance x="1488" y="1296" name="XLXI_83" orien="R180" />
        <instance x="1776" y="1264" name="XLXI_84" orien="R180" />
        <branch name="XLXN_83">
            <wire x2="1808" y1="1328" y2="1328" x1="1776" />
        </branch>
        <instance x="2032" y="1296" name="XLXI_85" orien="R180" />
    </sheet>
</drawing>