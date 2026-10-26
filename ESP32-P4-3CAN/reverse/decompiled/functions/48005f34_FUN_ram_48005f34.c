/* Firmware entry: 0x48005f34 */

undefined4 FUN_ram_48005f34(uint *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != (undefined8 *)0x0) {
    FUN_ram_4ff216d6(&DAT_ram_4ff6da84);
    FUN_ram_48005d3a();
    iVar1 = DAT_ram_4ff6da8c;
    uVar2 = DAT_ram_4ff6da88;
    if (DAT_ram_4ff6da90 == 0 && DAT_ram_4ff6da94 == 0) {
      uVar4 = 0;
      uVar10 = 0;
    }
    else {
      uVar10 = __divdi3(DAT_ram_4ff6da88,DAT_ram_4ff6da8c,1000000,0);
      uVar4 = __moddi3(uVar2,iVar1,1000000,0);
    }
    *(undefined4 *)(param_2 + 1) = uVar4;
    *param_2 = uVar10;
    FUN_ram_4ff216e2(&DAT_ram_4ff6da84);
  }
  if (param_1 != (uint *)0x0) {
    uVar3 = param_1[1];
    uVar2 = *param_1;
    uVar9 = param_1[2];
    uVar7 = (int)uVar3 >> 0x1f;
    uVar6 = (uVar7 ^ uVar2) - uVar7;
    uVar8 = (uint)((uVar7 ^ uVar2) < uVar6);
    uVar7 = (uVar7 ^ uVar3) - uVar7;
    if ((0 < (int)(uVar7 - uVar8)) || ((uVar7 == uVar8 && (0x862 < uVar6)))) {
      puVar5 = (undefined4 *)FUN_ram_4819bf88();
      *puVar5 = 0x16;
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0xffffffff;
    }
    FUN_ram_4ff216d6(&DAT_ram_4ff6da84);
    FUN_ram_48005d3a();
    uVar10 = FUN_ram_481a9d86();
    DAT_ram_4ff6da94 = (int)((ulonglong)uVar10 >> 0x20);
    DAT_ram_4ff6da90 = (int)uVar10;
    DAT_ram_4ff6da88 = uVar9 + uVar2 * 1000000;
    DAT_ram_4ff6da8c =
         (uint)(DAT_ram_4ff6da88 < uVar2 * 1000000) +
         uVar3 * 1000000 + (int)((ulonglong)uVar2 * 1000000 >> 0x20) + ((int)uVar9 >> 0x1f);
    FUN_ram_4ff216e2(&DAT_ram_4ff6da84);
  }
  return 0;
}


