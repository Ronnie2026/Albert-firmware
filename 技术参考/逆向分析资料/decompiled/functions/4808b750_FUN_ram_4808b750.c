/* Firmware entry: 0x4808b750 */

undefined4 FUN_ram_4808b750(uint param_1,int param_2,uint param_3,byte *param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  undefined *puVar9;
  uint uVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 7) {
    return 0;
  }
  iVar2 = FUN_ram_4ff4511a(param_2,"http://",7);
  if (param_1 == 7) {
    if (iVar2 != 0) {
      return 0;
    }
    if (param_3 != 0) {
      return 0;
    }
    return 1;
  }
  iVar3 = FUN_ram_4ff4511a(param_2,"https://",8);
  if (iVar3 == 0) {
    uVar7 = (uint)(iVar2 == 0);
    param_1 = (param_1 - 8) + uVar7;
    pbVar8 = (byte *)((param_2 - uVar7) + 8);
    if (param_1 == param_3) {
      if (param_3 == 0) {
        return 1;
      }
      goto LAB_ram_4808b848;
    }
    if (iVar2 == 0) goto LAB_ram_4808b7be;
    puVar9 = &DAT_ram_481cb538;
    uVar7 = strlen(":443");
joined_r0x4808b898:
    if (param_3 <= uVar7) goto LAB_ram_4808b7d6;
  }
  else {
    if (iVar2 != 0) {
      return 0;
    }
    param_1 = param_1 - 7;
    pbVar8 = (byte *)(param_2 + 7);
    uVar7 = 1;
    if (param_1 != param_3) {
LAB_ram_4808b7be:
      puVar9 = &DAT_ram_481cb534;
      uVar7 = strlen(":80");
      goto joined_r0x4808b898;
    }
LAB_ram_4808b848:
    pbVar1 = param_4;
    pbVar6 = pbVar8;
    while( true ) {
      bVar5 = *pbVar6;
      bVar4 = *pbVar1;
      if (0x40 < bVar5) break;
      if (0x40 < bVar4) goto LAB_ram_4808b868;
LAB_ram_4808b8fe:
      if (bVar5 != bVar4) goto LAB_ram_4808b868;
      pbVar6 = pbVar6 + 1;
      pbVar1 = pbVar1 + 1;
      if (pbVar6 == pbVar8 + param_3) {
        return 1;
      }
    }
    if (bVar5 < 0x5b) {
      if (0x40 < bVar4) {
        bVar5 = bVar5 + 0x20;
LAB_ram_4808b8f2:
        if (bVar4 < 0x5b) {
          bVar4 = bVar4 + 0x20;
        }
        goto LAB_ram_4808b8fe;
      }
    }
    else if (0x40 < bVar4) goto LAB_ram_4808b8f2;
LAB_ram_4808b868:
    param_1 = param_3;
    if (uVar7 == 0) {
      uVar7 = 4;
      if (param_3 < 5) {
        return 0;
      }
      puVar9 = &DAT_ram_481cb538;
    }
    else {
      uVar7 = 3;
      if (param_3 < 4) {
        return 0;
      }
      puVar9 = &DAT_ram_481cb534;
    }
  }
  uVar10 = param_3 - uVar7;
  iVar2 = FUN_ram_4ff4511a(param_4 + uVar10,puVar9,uVar7);
  if (iVar2 == 0) {
    if (param_3 < uVar10) {
      uVar10 = param_3;
    }
    if (param_1 == uVar10) {
      pbVar1 = param_4;
      pbVar6 = pbVar8;
      do {
        bVar5 = *pbVar6;
        bVar4 = *pbVar1;
        if (bVar5 < 0x41) {
          if (0x40 < bVar4) break;
        }
        else {
          if (bVar5 < 0x5b) {
            if (bVar4 < 0x41) break;
            bVar5 = bVar5 + 0x20;
          }
          else if (bVar4 < 0x41) break;
          if (bVar4 < 0x5b) {
            bVar4 = bVar4 + 0x20;
          }
        }
        if (bVar5 != bVar4) break;
        pbVar6 = pbVar6 + 1;
        pbVar1 = pbVar1 + 1;
        if (pbVar6 == pbVar8 + param_1) {
          return 1;
        }
      } while( true );
    }
  }
LAB_ram_4808b7d6:
  if (uVar7 < param_1) {
    uVar10 = param_1 - uVar7;
    iVar2 = FUN_ram_4ff4511a(pbVar8 + uVar10,puVar9,uVar7);
    if (iVar2 == 0) {
      if (param_1 < uVar10) {
        uVar10 = param_1;
      }
      if (param_3 == uVar10) {
        pbVar1 = pbVar8 + param_3;
        while( true ) {
          bVar5 = *pbVar8;
          bVar4 = *param_4;
          if (bVar5 < 0x41) {
            if (0x40 < bVar4) {
              return 0;
            }
          }
          else {
            if (bVar5 < 0x5b) {
              if (bVar4 < 0x41) {
                return 0;
              }
              bVar5 = bVar5 + 0x20;
            }
            else if (bVar4 < 0x41) {
              return 0;
            }
            if (bVar4 < 0x5b) {
              bVar4 = bVar4 + 0x20;
            }
          }
          if (bVar5 != bVar4) break;
          pbVar8 = pbVar8 + 1;
          param_4 = param_4 + 1;
          if (pbVar1 == pbVar8) {
            return 1;
          }
        }
        return 0;
      }
    }
  }
  return 0;
}


