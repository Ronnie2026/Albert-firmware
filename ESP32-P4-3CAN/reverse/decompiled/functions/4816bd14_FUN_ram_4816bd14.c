/* Firmware entry: 0x4816bd14 */

undefined4 FUN_ram_4816bd14(int *param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  size_t sVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  ushort *puVar9;
  ushort *puVar10;
  char *__s;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar2 = *(undefined4 **)(*param_1 + 0x68);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  if ((((param_3 < param_2) || ((int)param_3 - (int)param_2 < 4)) ||
      (puVar10 = param_2 + 1, param_3 < puVar10)) ||
     (uVar8 = (*param_2 & 0xff) << 8 | (uint)(*param_2 >> 8),
     (uint)((int)param_3 - (int)puVar10) < uVar8)) {
LAB_ram_4816bd28:
    FUN_ram_481714f0(param_1,0x32,0xffff8d00);
    uVar3 = 0xffff8d00;
  }
  else {
    puVar9 = (ushort *)(uVar8 + (int)puVar10);
    puVar6 = puVar10;
    do {
      if (puVar9 <= puVar6) {
        __s = (char *)*puVar2;
        do {
          if (__s == (char *)0x0) {
            FUN_ram_481714f0(param_1,0x78,0xffff8a80);
            return 0xffff8a80;
          }
          sVar4 = strlen(__s);
          for (puVar6 = puVar10; puVar6 < puVar9;
              puVar6 = (ushort *)((byte *)((int)puVar6 + 1) + (byte)uVar1)) {
            uVar1 = *puVar6;
            if ((sVar4 == (byte)uVar1) &&
               (iVar5 = FUN_ram_4ff4511a((byte *)((int)puVar6 + 1),__s,sVar4), iVar5 == 0)) {
              param_1[0x33] = (int)__s;
              return 0;
            }
          }
          __s = (char *)puVar2[1];
          puVar2 = puVar2 + 1;
        } while( true );
      }
      puVar7 = (ushort *)((int)puVar6 + 1);
      if (puVar9 < puVar7) goto LAB_ram_4816bd28;
      uVar8 = (uint)(byte)*puVar6;
      puVar6 = (ushort *)((int)puVar7 + uVar8);
      if ((uint)((int)puVar9 - (int)puVar7) < uVar8) goto LAB_ram_4816bd28;
    } while (uVar8 != 0);
    FUN_ram_481714f0(param_1,0x2f,0xffff9a00);
    uVar3 = 0xffff9a00;
  }
  return uVar3;
}


