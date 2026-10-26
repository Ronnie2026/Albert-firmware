/* Firmware entry: 0x48033c8e */

void FUN_ram_48033c8e(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar3 = DAT_ram_4ff5c5cc;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff5cebc = DAT_ram_4ff6de6d ^ 1;
  DAT_ram_4ff5cec0 = 10;
  DAT_ram_4ff5cec4 = 0;
  iVar1 = 120000;
  DAT_ram_4ff5cec8 = 120000;
  DAT_ram_4ff5cecc = 0;
  DAT_ram_4ff5ced0 = 0;
  DAT_ram_4ff5ceb8 = DAT_ram_4ff5ceb8 + 2;
  if (DAT_ram_4ff5c5c0 == '\0') {
    uVar2 = 0;
    iVar5 = 0;
    iVar1 = 0;
    uVar4 = 0;
    DAT_ram_4ff5cf14 = 0;
    iVar3 = 0;
    goto LAB_ram_48033d34;
  }
  if (DAT_ram_4ff5c5cc == 0) {
    uVar2 = 0;
    iVar5 = 0;
    iVar1 = 0;
    uVar4 = 0;
    DAT_ram_4ff5cf14 = 0;
    goto LAB_ram_48033d34;
  }
  uVar4 = FUN_ram_48025ba6();
  iVar5 = DAT_ram_4ff5c5c4;
  uVar2 = 2;
  if (DAT_ram_4ff5c548 == '\x02') {
    iVar1 = DAT_ram_4ff5c5d8;
    if (DAT_ram_4ff5c5dc == '\0') {
      iVar1 = FUN_ram_48025ba6();
    }
    uVar2 = 0;
    DAT_ram_4ff5cf14 = 5;
    goto LAB_ram_48033d34;
  }
  if (DAT_ram_4ff5c548 == '\x04') {
    iVar1 = 5000;
LAB_ram_48033dca:
    uVar2 = 0;
  }
  else {
    if (DAT_ram_4ff5c548 != '\x03') goto LAB_ram_48033dca;
    iVar1 = 3000;
  }
  iVar1 = iVar1 + DAT_ram_4ff5c5c4;
  DAT_ram_4ff5cf14 = 10;
LAB_ram_48033d34:
  DAT_ram_4ff5cf10 = iVar3;
  DAT_ram_4ff5cf18 = uVar4;
  DAT_ram_4ff5cf1c = iVar1;
  DAT_ram_4ff5cf20 = iVar5;
  DAT_ram_4ff5cf24 = uVar2;
  DAT_ram_4ff5cf0c = DAT_ram_4ff5cf0c + 2;
  return;
}


