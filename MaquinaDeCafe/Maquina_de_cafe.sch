<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="BombaAgua" />
        <signal name="XLXN_3" />
        <signal name="XLXN_4">
        </signal>
        <signal name="Seletor(1:0)" />
        <signal name="Clock" />
        <signal name="TempoDeAgua(3:0)" />
        <signal name="Power" />
        <signal name="Start" />
        <signal name="XLXN_16" />
        <signal name="EstadoAtual(2:0)" />
        <signal name="Termobloco" />
        <signal name="Refill" />
        <signal name="testeRefill">
        </signal>
        <signal name="CodigoCapsula(3:0)" />
        <port polarity="Output" name="BombaAgua" />
        <port polarity="Input" name="Seletor(1:0)" />
        <port polarity="Input" name="Clock" />
        <port polarity="Output" name="TempoDeAgua(3:0)" />
        <port polarity="Input" name="Power" />
        <port polarity="Input" name="Start" />
        <port polarity="Output" name="EstadoAtual(2:0)" />
        <port polarity="Output" name="Termobloco" />
        <port polarity="Input" name="Refill" />
        <port polarity="Input" name="CodigoCapsula(3:0)" />
        <blockdef name="ContadorTermobloco">
            <timestamp>2022-1-21T12:56:19</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
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
        <blockdef name="ReservatorioV4">
            <timestamp>2022-1-21T13:33:24</timestamp>
            <rect width="256" x="64" y="-192" height="192" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="Mquina_De_EstadosV2">
            <timestamp>2022-1-21T13:24:54</timestamp>
            <rect width="400" x="64" y="-512" height="512" />
            <line x2="0" y1="-480" y2="-480" x1="64" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="528" y1="-480" y2="-480" x1="464" />
            <line x2="528" y1="-256" y2="-256" x1="464" />
            <rect width="64" x="464" y="-44" height="24" />
            <line x2="528" y1="-32" y2="-32" x1="464" />
        </blockdef>
        <block symbolname="ContadorTermobloco" name="XLXI_2">
            <blockpin signalname="XLXN_16" name="Ativar" />
            <blockpin signalname="Clock" name="Clock" />
            <blockpin signalname="XLXN_3" name="Saida" />
        </block>
        <block symbolname="ReservatorioV4" name="XLXI_10">
            <blockpin signalname="BombaAgua" name="Usar" />
            <blockpin signalname="Refill" name="Refill" />
            <blockpin signalname="Clock" name="Clock" />
            <blockpin signalname="XLXN_4" name="TemAgua" />
            <blockpin signalname="testeRefill" name="HouveRefill" />
            <blockpin signalname="TempoDeAgua(3:0)" name="TempoDeAgua(3:0)" />
        </block>
        <block symbolname="and2" name="XLXI_7">
            <blockpin signalname="XLXN_3" name="I0" />
            <blockpin signalname="XLXN_16" name="I1" />
            <blockpin signalname="Termobloco" name="O" />
        </block>
        <block symbolname="Mquina_De_EstadosV2" name="XLXI_14">
            <blockpin signalname="XLXN_3" name="contadorTermobloco" />
            <blockpin signalname="XLXN_4" name="Reservatorio" />
            <blockpin signalname="testeRefill" name="refill" />
            <blockpin signalname="Start" name="start" />
            <blockpin signalname="Power" name="Power" />
            <blockpin signalname="Clock" name="clock" />
            <blockpin signalname="Seletor(1:0)" name="seletor(1:0)" />
            <blockpin signalname="CodigoCapsula(3:0)" name="capsula(3:0)" />
            <blockpin signalname="BombaAgua" name="BombaAgua" />
            <blockpin signalname="XLXN_16" name="saida5s" />
            <blockpin signalname="EstadoAtual(2:0)" name="EstadoAtual(2:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1680" y="1296" name="XLXI_2" orien="R0">
        </instance>
        <branch name="BombaAgua">
            <wire x2="1520" y1="976" y2="976" x1="1408" />
            <wire x2="1520" y1="976" y2="1440" x1="1520" />
            <wire x2="1680" y1="1440" y2="1440" x1="1520" />
            <wire x2="1616" y1="912" y2="912" x1="1520" />
            <wire x2="1520" y1="912" y2="976" x1="1520" />
        </branch>
        <branch name="XLXN_3">
            <wire x2="816" y1="864" y2="976" x1="816" />
            <wire x2="880" y1="976" y2="976" x1="816" />
            <wire x2="2128" y1="864" y2="864" x1="816" />
            <wire x2="2128" y1="864" y2="1200" x1="2128" />
            <wire x2="2320" y1="1200" y2="1200" x1="2128" />
            <wire x2="2128" y1="1200" y2="1200" x1="2064" />
            <wire x2="2384" y1="1056" y2="1056" x1="2320" />
            <wire x2="2320" y1="1056" y2="1200" x1="2320" />
        </branch>
        <branch name="XLXN_4">
            <wire x2="2160" y1="832" y2="832" x1="784" />
            <wire x2="2160" y1="832" y2="1440" x1="2160" />
            <wire x2="784" y1="832" y2="1040" x1="784" />
            <wire x2="880" y1="1040" y2="1040" x1="784" />
            <wire x2="2160" y1="1440" y2="1440" x1="2064" />
        </branch>
        <iomarker fontsize="28" x="720" y="1504" name="Refill" orien="R180" />
        <branch name="Seletor(1:0)">
            <wire x2="880" y1="1360" y2="1360" x1="720" />
        </branch>
        <branch name="Clock">
            <wire x2="848" y1="1568" y2="1568" x1="720" />
            <wire x2="1600" y1="1568" y2="1568" x1="848" />
            <wire x2="1680" y1="1568" y2="1568" x1="1600" />
            <wire x2="880" y1="1296" y2="1296" x1="848" />
            <wire x2="848" y1="1296" y2="1568" x1="848" />
            <wire x2="1680" y1="1264" y2="1264" x1="1600" />
            <wire x2="1600" y1="1264" y2="1568" x1="1600" />
        </branch>
        <branch name="TempoDeAgua(3:0)">
            <wire x2="2144" y1="1568" y2="1568" x1="2064" />
        </branch>
        <iomarker fontsize="28" x="2144" y="1568" name="TempoDeAgua(3:0)" orien="R0" />
        <iomarker fontsize="28" x="720" y="1568" name="Clock" orien="R180" />
        <iomarker fontsize="28" x="720" y="1360" name="Seletor(1:0)" orien="R180" />
        <branch name="Power">
            <wire x2="880" y1="1232" y2="1232" x1="720" />
        </branch>
        <branch name="Start">
            <wire x2="880" y1="1168" y2="1168" x1="720" />
        </branch>
        <iomarker fontsize="28" x="720" y="1168" name="Start" orien="R180" />
        <iomarker fontsize="28" x="720" y="1232" name="Power" orien="R180" />
        <iomarker fontsize="28" x="1616" y="912" name="BombaAgua" orien="R0" />
        <branch name="EstadoAtual(2:0)">
            <wire x2="1472" y1="1424" y2="1424" x1="1408" />
            <wire x2="1472" y1="1424" y2="1760" x1="1472" />
            <wire x2="1520" y1="1760" y2="1760" x1="1472" />
        </branch>
        <iomarker fontsize="28" x="1520" y="1760" name="EstadoAtual(2:0)" orien="R0" />
        <instance x="1680" y="1600" name="XLXI_10" orien="R0">
        </instance>
        <instance x="2384" y="1120" name="XLXI_7" orien="R0" />
        <branch name="Termobloco">
            <wire x2="2672" y1="1024" y2="1024" x1="2640" />
        </branch>
        <iomarker fontsize="28" x="2672" y="1024" name="Termobloco" orien="R0" />
        <branch name="XLXN_16">
            <wire x2="1568" y1="1200" y2="1200" x1="1408" />
            <wire x2="1680" y1="1200" y2="1200" x1="1568" />
            <wire x2="2384" y1="992" y2="992" x1="1568" />
            <wire x2="1568" y1="992" y2="1200" x1="1568" />
        </branch>
        <branch name="Refill">
            <wire x2="1680" y1="1504" y2="1504" x1="720" />
        </branch>
        <instance x="880" y="1456" name="XLXI_14" orien="R0">
        </instance>
        <branch name="testeRefill">
            <wire x2="752" y1="800" y2="1104" x1="752" />
            <wire x2="880" y1="1104" y2="1104" x1="752" />
            <wire x2="2192" y1="800" y2="800" x1="752" />
            <wire x2="2192" y1="800" y2="1504" x1="2192" />
            <wire x2="2192" y1="1504" y2="1504" x1="2064" />
        </branch>
        <branch name="CodigoCapsula(3:0)">
            <wire x2="880" y1="1424" y2="1424" x1="720" />
        </branch>
        <iomarker fontsize="28" x="720" y="1424" name="CodigoCapsula(3:0)" orien="R180" />
    </sheet>
</drawing>