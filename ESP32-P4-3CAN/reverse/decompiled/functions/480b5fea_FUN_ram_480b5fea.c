/* Firmware entry: 0x480b5fea */

undefined8 FUN_ram_480b5fea(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  byte *pbVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dca9 == '\0') {
    uVar4 = 0;
    iVar3 = 0;
  }
  else {
    pbVar6 = (byte *)&DAT_ram_4ff5bd30;
    bVar5 = 0;
    do {
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      bVar5 = bVar5 | bVar1;
    } while (pbVar6 != (byte *)&DAT_ram_4ff5bd40);
    if (bVar5 == 0) {
      return 0;
    }
    if (DAT_ram_4ff5bd40 == 0) {
      return 0;
    }
    iVar3 = FUN_ram_480b5c0c(&DAT_ram_4ff5bd98,DAT_ram_4ff6dcac + 0x3d7d1,0x30001);
    iVar2 = DAT_ram_4ff6dcac;
    if ((iVar3 != 1) || (DAT_ram_4ff5bdac != DAT_ram_4ff5bd40)) {
      return 0;
    }
    if ((DAT_ram_4ff5bd9c == DAT_ram_4ff5bd30) &&
       ((DAT_ram_4ff5bda0 == DAT_ram_4ff5bd34 && (DAT_ram_4ff5bda4 == DAT_ram_4ff5bd38)))) {
      if (DAT_ram_4ff5bda8 == DAT_ram_4ff5bd3c) {
        iVar3 = DAT_ram_4ff6dcac + 0xd7d0;
        *(undefined4 *)(DAT_ram_4ff6dcac + 0x6d9d4) = DAT_ram_4ff5bdb8;
        FUN_ram_4ff45158(iVar3,iVar2 + 0x3d7d1);
        uVar4 = *(undefined4 *)(iVar2 + 0x6d9d4);
        goto LAB_ram_480b606c;
      }
    }
    iVar3 = 0;
    uVar4 = 0;
  }
LAB_ram_480b606c:
  return CONCAT44(iVar3,uVar4);
}


