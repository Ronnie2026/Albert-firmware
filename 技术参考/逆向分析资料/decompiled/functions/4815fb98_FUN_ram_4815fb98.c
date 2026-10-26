/* Firmware entry: 0x4815fb98 */

undefined4 FUN_ram_4815fb98(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar5 = (uint)*(byte *)(param_2 + 1);
  FUN_ram_4819a582(param_3,"TUPLE: %s, size: %d\n",*(undefined4 *)(param_1 + 4),uVar5);
  if (uVar5 < 2) {
    return 0x104;
  }
  bVar1 = *(byte *)(param_2 + 2);
  FUN_ram_4819a582(param_3,"  INDX: %02X, Intface: %d, Default: %d, Conf-Entry-Num: %d\n",bVar1,
                   bVar1 >> 7,bVar1 >> 6 & 1,bVar1 & 0x3f);
  iVar6 = uVar5 - 2;
  if ((char)bVar1 < '\0') {
    FUN_ram_4819a582(param_3,"  IF: %02X\n",*(undefined1 *)(param_2 + 3));
    if (iVar6 == 0) {
      return 0x104;
    }
    pbVar3 = (byte *)(param_2 + 4);
    iVar7 = uVar5 - 3;
  }
  else {
    pbVar3 = (byte *)(param_2 + 3);
    iVar7 = iVar6;
    iVar6 = uVar5 - 1;
  }
  bVar1 = *pbVar3;
  uVar5 = (uint)bVar1;
  bVar4 = bVar1 >> 5 & 3;
  FUN_ram_4819a582(param_3,
                   "  FS: %02X, misc: %d, mem_space: %d, irq: %d, io_space: %d, timing: %d, power: %d\n"
                   ,uVar5,bVar1 >> 7,bVar4,(uVar5 & 0x10) >> 4,bVar1 >> 3 & 1,bVar1 >> 2 & 1,
                   uVar5 & 3);
  if ((bVar1 & 0xf) == 0) {
    if ((bVar1 & 0x10) == 0) {
      pbVar3 = pbVar3 + 1;
    }
    else {
      if (iVar7 == 0) {
        return 0x104;
      }
      bVar2 = pbVar3[1];
      iVar7 = iVar6 + -2;
      FUN_ram_4819a582(param_3,"  IR: %02X, mask: %d, ",(uint)bVar2,(bVar2 & 0x10) >> 4);
      if ((bVar2 & 0x10) == 0) {
        pbVar3 = pbVar3 + 2;
      }
      else {
        if (iVar7 < 2) {
          return 0x104;
        }
        iVar7 = iVar6 + -4;
        FUN_ram_4819a582(param_3,"  IRQ: %02X %02X\n",pbVar3[2],pbVar3[3]);
        pbVar3 = pbVar3 + 4;
      }
    }
    if ((bVar1 >> 5 & 3) != 0) {
      if (iVar7 < 2) {
        return 0x104;
      }
      if (bVar4 != 1) {
        return 0x106;
      }
      FUN_ram_4819a582(param_3,"  LEN: %04X\n",*(undefined2 *)pbVar3);
    }
    if (-1 < (char)bVar1) {
      return 0;
    }
  }
  return 0x106;
}


