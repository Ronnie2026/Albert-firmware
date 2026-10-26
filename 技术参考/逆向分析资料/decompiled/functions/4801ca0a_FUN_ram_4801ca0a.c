/* Firmware entry: 0x4801ca0a */

int FUN_ram_4801ca0a(uint param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    iVar3 = 1;
    uVar4 = param_1;
    if (0x7f < param_1) {
      *param_3 = (byte)param_1 | 0x80;
      uVar4 = param_1 >> 7;
      if (uVar4 < 0x80) {
        param_3 = param_3 + 1;
        iVar3 = 2;
      }
      else {
        param_3[1] = (byte)uVar4 | 0x80;
        uVar4 = param_1 >> 0xe;
        if (uVar4 < 0x80) {
          param_3 = param_3 + 2;
          iVar3 = 3;
        }
        else {
          param_3[2] = (byte)uVar4 | 0x80;
          uVar4 = param_1 >> 0x15;
          if (uVar4 < 0x80) {
            param_3 = param_3 + 3;
            iVar3 = 4;
          }
          else {
            param_3[3] = (byte)uVar4 | 0x80;
            uVar4 = param_1 >> 0x1c;
            param_3 = param_3 + 4;
            iVar3 = 5;
          }
        }
      }
    }
    *param_3 = (byte)uVar4;
    return iVar3;
  }
  param_3[2] = (byte)(param_1 >> 0xe) | 0x80;
  param_3[3] = (byte)(param_1 >> 0x15) | 0x80;
  param_3[1] = (byte)(param_1 >> 7) | 0x80;
  *param_3 = (byte)param_1 | 0x80;
  bVar2 = (byte)(param_2 << 4);
  bVar1 = (byte)(param_1 >> 0x18);
  if (7 < param_2) {
    param_3[4] = bVar1 >> 4 | bVar2 & 0x70 | 0x80;
    param_2 = param_2 >> 3;
    if (param_2 < 0x80) {
      pbVar5 = param_3 + 5;
      iVar3 = 6;
    }
    else {
      iVar6 = 5;
      do {
        iVar3 = iVar6;
        iVar6 = iVar3 + 1;
        pbVar5 = param_3 + iVar6;
        pbVar5[-1] = (byte)param_2 | 0x80;
        param_2 = param_2 >> 7;
      } while (0x7f < param_2);
      iVar3 = iVar3 + 2;
    }
    *pbVar5 = (byte)param_2;
    return iVar3;
  }
  param_3[4] = bVar1 >> 4 | bVar2;
  return 5;
}


