/* Firmware entry: 0x4813666a */

uint FUN_ram_4813666a(undefined4 param_1,uint param_2,uint param_3,undefined4 param_4,int param_5,
                     undefined4 *param_6)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  ushort uStack_46;
  uint uStack_44;
  uint uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  uint *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)FUN_ram_48134b36();
  if (piVar1 != (int *)0x0) {
    if ((uint *)*piVar1 != (uint *)0x0) {
      if ((*(uint *)*piVar1 & 0xf0) == 0x10) {
        uVar3 = FUN_ram_48134598(piVar1,param_2,param_3,param_4);
        if ((param_5 != 0) && (param_6 != (undefined4 *)0x0)) {
          FUN_ram_4814f084(*piVar1,&iStack_3c,&uStack_44,0);
          FUN_ram_48134802(*piVar1,&iStack_3c,uStack_44 & 0xffff,param_5,param_6);
        }
      }
      else {
        puStack_34 = &uStack_44;
        uStack_46 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        uStack_24 = 0;
        uStack_30 = 1;
        uStack_44 = param_2;
        uStack_40 = param_3;
        iStack_3c = param_5;
        if (param_6 == (undefined4 *)0x0) {
          uStack_38 = 0;
          iVar2 = FUN_ram_4813490a(piVar1,param_4,&iStack_3c,&uStack_46);
          if (iVar2 != 0) goto LAB_ram_48136754;
          uVar3 = (uint)uStack_46;
          if (param_3 < uStack_46) {
            uVar3 = param_3;
          }
        }
        else {
          uStack_38 = *param_6;
          iVar2 = FUN_ram_4813490a(piVar1,param_4,&iStack_3c,&uStack_46);
          if (iVar2 != 0) {
LAB_ram_48136754:
            iVar4 = FUN_ram_481517ce(iVar2);
            if (iVar4 != 0) {
              puVar5 = (undefined4 *)FUN_ram_4819bf88();
              uVar6 = FUN_ram_481517ce(iVar2);
              *puVar5 = uVar6;
            }
            FUN_ram_48134a50(piVar1);
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return 0xffffffff;
          }
          uVar3 = (uint)uStack_46;
          if (param_3 < uStack_46) {
            uVar3 = param_3;
          }
          *param_6 = uStack_38;
        }
      }
      FUN_ram_48134a50(piVar1);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return uVar3;
    }
    FUN_ram_48134a50();
  }
  puVar5 = (undefined4 *)FUN_ram_4819bf88();
  *puVar5 = 9;
  return 0xffffffff;
}


