<project xmlns="com.autoesl.autopilot.project" name="sha256" top="sha256">
    <includePaths/>
    <libraryPaths/>
    <Simulation>
        <SimFlow name="csim" clean="true" csimMode="0" lastCsimMode="0" compiler="true"/>
    </Simulation>
    <files xmlns="">
        <file name="../src/sha256_tb.c" sc="0" tb="1" cflags=" -std=c99"/>
        <file name="sha256/src/sha256.c" sc="0" tb="false" cflags=""/>
        <file name="sha256/src/sha256.h" sc="0" tb="false" cflags=""/>
        <file name="sha256/src/sha256_impl.c" sc="0" tb="false" cflags=""/>
        <file name="sha256/src/sha256_impl.h" sc="0" tb="false" cflags=""/>
    </files>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>
