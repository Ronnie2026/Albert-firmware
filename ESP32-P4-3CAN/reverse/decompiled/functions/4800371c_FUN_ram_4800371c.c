/* Firmware entry: 0x4800371c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4800371c(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = _DAT_ram_501151ec;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar3 = "";
  _DAT_ram_501151ec = 0;
  while (uVar2 != 0) {
    while ((uVar2 >> ((int)*pcVar3 & 0x1fU) & 1) == 0) {
      pcVar3 = pcVar3 + 1;
      if (pcVar3 == "") goto LAB_ram_4800377e;
    }
    uVar4 = ~(1 << ((int)*pcVar3 & 0x1fU));
    _DAT_ram_501101c4 = _DAT_ram_501101c4 & uVar4;
    pcVar3 = pcVar3 + 1;
    uVar2 = uVar2 & uVar4;
    if (pcVar3 == "") break;
  }
LAB_ram_4800377e:
  uVar2 = 0;
  uVar4 = 0xffff;
  cVar1 = DAT_ram_48235e10;
  while( true ) {
    if (0xf < (uint)(int)cVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/hal/esp32p4/include/hal/rtc_io_ll.h",0x1eb,
                       "rtcio_ll_wakeup_is_enabled",
                       "rtcio_num >= 0 && rtcio_num < SOC_RTCIO_PIN_COUNT && \"io does not support deep sleep wake-up function\""
                      );
    }
    iVar5 = ((int)cVar1 + 0xcU) * 4;
    if ((*(uint *)(iVar5 + 0x5012a004) & 1) != 0) {
      *(uint *)(iVar5 + 0x5012a004) = *(uint *)(iVar5 + 0x5012a004) & 0xfffffffe;
      *(uint *)(iVar5 + 0x5012a004) = *(uint *)(iVar5 + 0x5012a004) & 0xfffffff1;
      _DAT_ram_501101c4 = _DAT_ram_501101c4 & ~(1 << (uVar2 & 0x1f));
    }
    uVar4 = uVar4 & ~(1 << (uVar2 & 0x1f));
    if (uVar4 == 0) break;
    iVar5 = __ffssi2(uVar4);
    uVar2 = iVar5 - 1;
    cVar1 = (&DAT_ram_48235e0f)[iVar5];
  }
  return;
}


