/* Firmware entry: 0x4812918a */

undefined4 FUN_ram_4812918a(int param_1,int *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar6 = *param_2;
  pcVar2 = (char *)(iVar6 + param_2[2]);
  uVar7 = param_2[2] + 1;
  pbVar4 = (byte *)(iVar6 + uVar7);
  if (*pcVar2 == '\"') {
    uVar10 = param_2[1];
    iVar11 = 0;
    pbVar3 = pbVar4;
    while (uVar7 < uVar10) {
      if (*pbVar3 == 0x22) {
        if ((uVar7 < uVar10) &&
           (pbVar5 = (byte *)(*(code *)param_2[4])(pbVar3 + (-iVar11 - (int)pcVar2) + 1),
           pbVar1 = pbVar5, pbVar5 != (byte *)0x0)) goto joined_r0x48129224;
        break;
      }
      if (*pbVar3 == 0x5c) {
        pbVar3 = pbVar3 + 1;
        if (uVar10 <= (uint)((int)pbVar3 - iVar6)) break;
        iVar11 = iVar11 + 1;
      }
      pbVar3 = pbVar3 + 1;
      uVar7 = (int)pbVar3 - iVar6;
    }
  }
  if (pbVar4 != (byte *)0x0) {
LAB_ram_481291ca:
    param_2[2] = (int)pbVar4 - *param_2;
  }
  return 0;
joined_r0x48129224:
  if (pbVar3 <= pbVar4) {
    *pbVar1 = 0;
    iVar6 = *param_2;
    *(byte **)(param_1 + 0x10) = pbVar5;
    *(undefined4 *)(param_1 + 0xc) = 0x10;
    param_2[2] = (int)(pbVar3 + (1 - iVar6));
    return 1;
  }
  bVar9 = *pbVar4;
  if (bVar9 == 0x5c) {
    bVar9 = pbVar4[1];
    if (bVar9 == 0x6e) {
      pbVar8 = pbVar1 + 1;
      bVar9 = 10;
      pbVar4 = pbVar4 + 2;
    }
    else if (bVar9 < 0x6f) {
      if (bVar9 == 0x62) {
        pbVar8 = pbVar1 + 1;
        bVar9 = 8;
        pbVar4 = pbVar4 + 2;
      }
      else if (bVar9 < 99) {
        if (((bVar9 != 0x2f) && (bVar9 != 0x5c)) && (bVar9 != 0x22)) {
LAB_ram_481292d4:
          (*(code *)param_2[5])(pbVar5);
          goto LAB_ram_481291ca;
        }
        pbVar8 = pbVar1 + 1;
        pbVar4 = pbVar4 + 2;
      }
      else {
        if (bVar9 != 0x66) goto LAB_ram_481292d4;
        pbVar8 = pbVar1 + 1;
        bVar9 = 0xc;
        pbVar4 = pbVar4 + 2;
      }
    }
    else if (bVar9 == 0x74) {
      pbVar8 = pbVar1 + 1;
      bVar9 = 9;
      pbVar4 = pbVar4 + 2;
    }
    else if (bVar9 == 0x75) {
      if (((int)pbVar3 - (int)pbVar4 < 6) ||
         (uVar7 = FUN_ram_48129112(pbVar4 + 2), uVar7 - 0xdc00 < 0x400)) goto LAB_ram_481292d4;
      if (uVar7 - 0xd800 < 0x400) {
        if (((((int)pbVar3 - (int)(pbVar4 + 6) < 6) || (pbVar4[6] != 0x5c)) || (pbVar4[7] != 0x75))
           || (uVar10 = FUN_ram_48129112(pbVar4 + 8), 0x3ff < uVar10 - 0xdc00))
        goto LAB_ram_481292d4;
        uVar7 = ((uVar7 & 0x3ff) << 10 | uVar10 & 0x3ff) + 0x10000;
        iVar6 = 0xc;
LAB_ram_4812938e:
        bVar9 = 0xf0;
        uVar10 = 3;
        iVar11 = 4;
LAB_ram_48129396:
        pbVar8 = pbVar1 + uVar10;
        do {
          *pbVar8 = (byte)uVar7 & 0x3f | 0x80;
          uVar10 = uVar10 - 1 & 0xff;
          uVar7 = uVar7 >> 6;
          pbVar8 = pbVar8 + -1;
        } while (uVar10 != 0);
        bVar9 = bVar9 | (byte)uVar7;
      }
      else {
        if (0x7f < uVar7) {
          if (uVar7 < 0x800) {
            iVar6 = 6;
            bVar9 = 0xc0;
            uVar10 = 1;
            iVar11 = 2;
          }
          else {
            if (0xffff < uVar7) {
              if (uVar7 < 0x110000) {
                iVar6 = 6;
                goto LAB_ram_4812938e;
              }
              goto LAB_ram_481292d4;
            }
            iVar6 = 6;
            bVar9 = 0xe0;
            uVar10 = 2;
            iVar11 = 3;
          }
          goto LAB_ram_48129396;
        }
        bVar9 = (byte)uVar7;
        iVar6 = 6;
        iVar11 = 1;
      }
      pbVar8 = pbVar1 + iVar11;
      pbVar4 = pbVar4 + iVar6;
    }
    else {
      if (bVar9 != 0x72) goto LAB_ram_481292d4;
      pbVar8 = pbVar1 + 1;
      bVar9 = 0xd;
      pbVar4 = pbVar4 + 2;
    }
  }
  else {
    pbVar4 = pbVar4 + 1;
    pbVar8 = pbVar1 + 1;
  }
  *pbVar1 = bVar9;
  pbVar1 = pbVar8;
  goto joined_r0x48129224;
}


