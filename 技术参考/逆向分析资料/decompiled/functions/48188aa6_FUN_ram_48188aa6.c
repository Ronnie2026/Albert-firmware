/* Firmware entry: 0x48188aa6 */

undefined4 FUN_ram_48188aa6(int param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  size_t sVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  size_t sVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = *(uint *)(param_1 + 4);
  if (uVar2 == param_3) {
    pbVar6 = *(byte **)(param_1 + 8);
    if (uVar2 != 0) {
      pbVar5 = param_2;
      do {
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 1;
        if ((bVar1 != *pbVar6) &&
           (((bVar1 ^ *pbVar6) != 0x20 || (0x19 < (byte)((bVar1 & 0xdf) + 0xbf)))))
        goto LAB_ram_48188aba;
        pbVar6 = pbVar6 + 1;
      } while (pbVar5 != param_2 + uVar2);
    }
    return 0;
  }
LAB_ram_48188aba:
  sVar3 = strlen((char *)param_2);
  if ((2 < uVar2) &&
     (((pcVar4 = *(char **)(param_1 + 8), *pcVar4 == '*' && (pcVar4[1] == '.')) && (sVar3 != 0)))) {
    sVar7 = 0;
    do {
      pbVar6 = param_2 + sVar7;
      if (*pbVar6 == 0x2e) {
        if (sVar7 == 0) {
          return 0xffffffff;
        }
        if (sVar3 - sVar7 != uVar2 - 1) {
          return 0xffffffff;
        }
        pbVar5 = (byte *)(pcVar4 + 1);
        do {
          bVar1 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          if (bVar1 != *pbVar6) {
            if ((bVar1 ^ *pbVar6) != 0x20) {
              return 0xffffffff;
            }
            if (0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) {
              return 0xffffffff;
            }
          }
          pbVar6 = pbVar6 + 1;
          if ((byte *)(pcVar4 + uVar2) == pbVar5) {
            return 0;
          }
        } while( true );
      }
      sVar7 = sVar7 + 1;
    } while (sVar3 != sVar7);
  }
  return 0xffffffff;
}


