/* Firmware entry: 0x4807271e */

bool FUN_ram_4807271e(uint param_1,char *param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_3 < param_1) {
    return false;
  }
  if (param_1 < 10) {
    return false;
  }
  iVar3 = FUN_ram_4ff4511a(param_2,"https://",8);
  if (iVar3 != 0) {
    return false;
  }
  pcVar4 = param_2;
  while (param_2 + param_1 != pcVar4) {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    if (0x5d < (byte)(cVar1 - 0x21U)) {
      return false;
    }
    if (cVar1 == '@') {
      return false;
    }
    if (cVar1 == '#') {
      return false;
    }
    if (cVar1 == '\\') {
      return false;
    }
  }
  uVar5 = 8;
  do {
    uVar7 = uVar5;
    if ((param_2[uVar5] & 0xefU) == 0x2f) break;
    uVar5 = uVar5 + 1;
    uVar7 = param_1;
  } while (param_1 != uVar5);
  uVar9 = FUN_ram_48030de0(param_1,param_2,8,uVar7 - 8);
  pcVar4 = (char *)((ulonglong)uVar9 >> 0x20);
  uVar5 = (uint)uVar9;
  if (uVar5 != 0) {
    if (*pcVar4 == '[') {
      iVar3 = FUN_ram_48030e10(uVar5,pcVar4,0x5d,0);
      if (iVar3 - 2U < 0xfffffffd) {
        if (uVar5 <= iVar3 + 1U) {
          return true;
        }
        if (pcVar4[iVar3 + 1U] == ':') {
          uVar7 = iVar3 + 2;
LAB_ram_4807281a:
          if (uVar7 == 0xffffffff) {
            return true;
          }
          if (uVar7 < uVar5) {
            pbVar6 = (byte *)(pcVar4 + uVar7);
            uVar7 = 0;
            while( true ) {
              bVar2 = *pbVar6;
              uVar7 = (bVar2 - 0x30) + uVar7 * 10;
              pbVar6 = pbVar6 + 1;
              if ((9 < (bVar2 - 0x30 & 0xff)) || (0xffff < uVar7)) break;
              if (pbVar6 == (byte *)(pcVar4 + uVar5)) {
                return uVar7 != 0;
              }
            }
          }
        }
      }
    }
    else {
      iVar3 = FUN_ram_48030e10(uVar5,pcVar4,0x3a,0);
      uVar9 = FUN_ram_48030de0(uVar5,pcVar4,0,iVar3);
      pbVar6 = (byte *)((ulonglong)uVar9 >> 0x20);
      if ((int)uVar9 != 0) {
        pbVar8 = pbVar6 + (int)uVar9;
        do {
          if (pbVar8 == pbVar6) {
            uVar7 = iVar3 + 1;
            if (iVar3 == -1) {
              return true;
            }
            goto LAB_ram_4807281a;
          }
          bVar2 = *pbVar6;
          pbVar6 = pbVar6 + 1;
        } while ((((byte)((bVar2 & 0xdf) + 0xbf) < 0x1a) || ((byte)(bVar2 - 0x30) < 10)) ||
                ((byte)(bVar2 - 0x2d) < 2));
      }
    }
  }
  return false;
}


