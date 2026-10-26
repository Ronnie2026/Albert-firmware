/* Firmware entry: 0x480763ea */

undefined4 FUN_ram_480763ea(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == 0) && (param_2 != 0)) {
    return 0;
  }
  uVar5 = 0;
  while( true ) {
    do {
      if (param_2 <= uVar5) {
        return 1;
      }
      uVar5 = uVar5 + 1;
      bVar1 = *(byte *)(param_1 + uVar5 + -1);
      uVar6 = (uint)bVar1;
    } while (-1 < (char)bVar1);
    if ((uVar6 & 0xe0) == 0xc0) {
      uVar6 = uVar6 & 0x1f;
      uVar2 = 0x80;
      uVar3 = 1;
    }
    else if ((uVar6 & 0xf0) == 0xe0) {
      uVar6 = uVar6 & 0xf;
      uVar2 = 0x800;
      uVar3 = 2;
    }
    else {
      if ((uVar6 & 0xf8) != 0xf0) {
        return 0;
      }
      uVar6 = uVar6 & 7;
      uVar2 = 0x10000;
      uVar3 = 3;
    }
    if (param_2 - uVar5 < uVar3) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    uVar3 = uVar3 + uVar5;
    do {
      uVar5 = uVar5 + 1;
      uVar4 = (uint)*(byte *)(param_1 + uVar5 + -1);
      if ((uVar4 & 0xc0) != 0x80) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      uVar6 = uVar6 << 6 | uVar4 & 0x3f;
    } while (uVar5 != uVar3);
    if (uVar6 < uVar2) break;
    if (0x10ffff < uVar6) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
    if (uVar6 - 0xd800 < 0x800) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
  }
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return 0;
}


