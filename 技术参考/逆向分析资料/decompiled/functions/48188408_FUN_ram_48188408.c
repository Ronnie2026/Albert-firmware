/* Firmware entry: 0x48188408 */

undefined4
FUN_ram_48188408(undefined1 *param_1,uint param_2,uint *param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_5 == 0) {
    *param_3 = 0;
    return 0;
  }
  uVar11 = 0;
  uVar10 = 0;
  uVar2 = 0;
  do {
    while( true ) {
      bVar7 = false;
      uVar3 = uVar2;
      if (uVar2 < param_5) {
        while (uVar3 = uVar2, param_4[uVar2] == 0x20) {
          uVar2 = uVar2 + 1;
          bVar7 = true;
          if (param_5 == uVar2) goto LAB_ram_481884a8;
        }
      }
      if (param_5 == uVar3) goto LAB_ram_481884a8;
      bVar1 = param_4[uVar3];
      if ((param_5 - uVar3 != 1) && (bVar1 == 0xd)) break;
      if (bVar1 != 10) {
        if ((bVar7) || ((char)bVar1 < '\0')) goto LAB_ram_48188582;
        if (bVar1 != 0x3d) goto LAB_ram_48188492;
        uVar11 = uVar11 + 1;
        if (2 < uVar11) goto LAB_ram_48188582;
LAB_ram_4818849e:
        uVar10 = uVar10 + 1;
      }
      uVar2 = uVar3 + 1;
      if (param_5 <= uVar2) goto LAB_ram_481884a6;
    }
    uVar2 = uVar3 + 1;
    if (param_4[uVar2] != 10) {
      if (!bVar7) {
LAB_ram_48188492:
        if ((uVar11 == 0) && (iVar5 = FUN_ram_481881c6(), -1 < iVar5)) goto LAB_ram_4818849e;
      }
      goto LAB_ram_48188582;
    }
  } while (uVar2 < param_5);
LAB_ram_481884a6:
  param_5 = uVar3 + 1;
LAB_ram_481884a8:
  if (((uVar10 - uVar11 & 3) == 1) || ((uVar10 & 3) != 0)) {
LAB_ram_48188582:
    uVar6 = 0xffffffd4;
  }
  else {
    uVar11 = (uVar10 >> 2) * 3 - uVar11;
    *param_3 = uVar11;
    if ((uVar11 == 0) || ((param_1 != (undefined1 *)0x0 && (uVar11 <= param_2)))) {
      pbVar4 = param_4 + param_5;
      iVar5 = 0;
      uVar2 = 0;
      puVar9 = param_1;
      do {
        while( true ) {
          uVar11 = (uint)*param_4;
          if ((uVar11 - 10 & 0xff) < 0x17) break;
          if (uVar11 == 0x3d) goto LAB_ram_48188544;
LAB_ram_481884f4:
          uVar11 = FUN_ram_481881c6(uVar11);
          iVar5 = iVar5 + 1;
          uVar2 = uVar11 | uVar2 << 6;
          if (iVar5 == 4) {
            puVar9[2] = (char)uVar2;
            *puVar9 = (char)(uVar2 >> 0x10);
            puVar9[1] = (char)(uVar2 >> 8);
            iVar5 = 0;
            puVar9 = puVar9 + 3;
          }
          param_4 = param_4 + 1;
          if (pbVar4 == param_4) goto LAB_ram_48188544;
        }
        if ((-0x40000a >> (uVar11 - 10 & 0x1f) & 1U) != 0) goto LAB_ram_481884f4;
        param_4 = param_4 + 1;
      } while (pbVar4 != param_4);
LAB_ram_48188544:
      if (iVar5 == 3) {
        *puVar9 = (char)((uVar2 << 6) >> 0x10);
        puVar9[1] = (char)((uVar2 << 6) >> 8);
        puVar8 = (undefined1 *)*param_3;
        puVar9 = puVar9 + (2 - (int)param_1);
      }
      else if (iVar5 == 2) {
        *puVar9 = (char)((uVar2 << 0xc) >> 0x10);
        puVar9 = puVar9 + (1 - (int)param_1);
        puVar8 = (undefined1 *)*param_3;
      }
      else {
        puVar9 = puVar9 + -(int)param_1;
        puVar8 = (undefined1 *)*param_3;
      }
      if (puVar8 == puVar9) {
        return 0;
      }
      uVar6 = 0xffffff92;
    }
    else {
      uVar6 = 0xffffffd6;
    }
  }
  return uVar6;
}


