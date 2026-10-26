/* Firmware entry: 0x4819217e */

undefined4
thunk_FUN_ram_48188292(undefined1 *param_1,uint param_2,uint *param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_5 == 0) {
    *param_3 = 0;
LAB_ram_48188372:
    uVar6 = 0;
  }
  else {
    uVar10 = ((uint)((ulonglong)param_5 * 0xaaaaaaab >> 0x20) & 0xfffffffe) + param_5 / 3;
    uVar7 = (uint)(param_5 != uVar10) + param_5 / 3;
    if (uVar7 < 0x40000000) {
      uVar7 = uVar7 * 4 + 1;
      if ((uVar7 <= param_2) && (param_1 != (undefined1 *)0x0)) {
        if (param_5 < 3) {
          uVar7 = 1;
          puVar9 = param_1;
LAB_ram_48188382:
          iVar4 = (*param_4 & 3) * 0x10;
          bVar1 = *param_4 >> 2;
          if (uVar7 < param_5) {
            bVar2 = param_4[1];
            uVar5 = FUN_ram_4818810a(bVar1);
            *puVar9 = uVar5;
            uVar5 = FUN_ram_4818810a(iVar4 + ((int)(uint)bVar2 >> 4));
            puVar9[1] = uVar5;
            uVar5 = FUN_ram_4818810a((bVar2 & 0xf) << 2);
          }
          else {
            uVar5 = FUN_ram_4818810a(bVar1);
            *puVar9 = uVar5;
            uVar5 = FUN_ram_4818810a(iVar4);
            puVar9[1] = uVar5;
            uVar5 = 0x3d;
          }
          puVar9[2] = uVar5;
          puVar9[3] = 0x3d;
          puVar9 = puVar9 + 4;
        }
        else {
          puVar8 = param_1;
          uVar11 = 0;
          do {
            uVar7 = uVar11;
            bVar1 = *param_4;
            bVar2 = param_4[1];
            puVar9 = puVar8 + 4;
            bVar3 = param_4[2];
            uVar5 = FUN_ram_4818810a(bVar1 >> 2);
            *puVar8 = uVar5;
            uVar5 = FUN_ram_4818810a((bVar1 & 3) * 0x10 + ((int)(uint)bVar2 >> 4));
            puVar8[1] = uVar5;
            uVar5 = FUN_ram_4818810a((bVar2 & 0xf) * 4 + ((int)(uint)bVar3 >> 6));
            puVar8[2] = uVar5;
            uVar5 = FUN_ram_4818810a(bVar3 & 0x3f);
            puVar8[3] = uVar5;
            uVar11 = uVar7 + 3;
            param_4 = param_4 + 3;
            puVar8 = puVar9;
          } while (uVar11 < uVar10);
          if (uVar11 < param_5) {
            uVar7 = uVar7 + 4;
            goto LAB_ram_48188382;
          }
        }
        *param_3 = (int)puVar9 - (int)param_1;
        *puVar9 = 0;
        goto LAB_ram_48188372;
      }
    }
    else {
      uVar7 = 0xffffffff;
    }
    *param_3 = uVar7;
    uVar6 = 0xffffffd6;
  }
  return uVar6;
}


