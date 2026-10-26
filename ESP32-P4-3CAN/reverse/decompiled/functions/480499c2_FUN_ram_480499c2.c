/* Firmware entry: 0x480499c2 */

undefined4 FUN_ram_480499c2(char *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if ((param_2 == 7) && (bVar5 = param_1[1], bVar5 < 0x10)) {
    pbVar4 = (byte *)(param_1 + 1);
    cVar3 = '~';
    pbVar2 = pbVar4;
    do {
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
      cVar3 = cVar3 + bVar1;
    } while ((byte *)(param_1 + 7) != pbVar2);
    if (*param_1 == cVar3) {
      if ((param_3 - 1U & 0xff) < 2) {
        bVar5 = bVar5 + 1 & 0xf | (byte)(param_3 << 4);
      }
      else {
        if (param_3 != 4) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 0;
        }
        bVar5 = bVar5 + 1 & 0xf | 0x40;
      }
      param_1[1] = bVar5;
      uVar6 = 0x7e;
      do {
        bVar5 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        uVar7 = uVar6 + bVar5;
        uVar6 = uVar7 & 0xffff;
      } while ((byte *)(param_1 + 7) != pbVar4);
      *param_1 = (char)(uVar7 * 0x10000 >> 0x10);
      return 1;
    }
  }
  return 0;
}


