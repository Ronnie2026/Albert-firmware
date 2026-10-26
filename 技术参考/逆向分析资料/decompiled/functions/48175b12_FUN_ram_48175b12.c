/* Firmware entry: 0x48175b12 */

int FUN_ram_48175b12(int *param_1,undefined4 param_2,uint param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puStack_6c;
  undefined2 uStack_68;
  short sStack_66;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar4 = (uint)*(ushort *)((int)param_1 + 6);
  if (param_3 <= uVar4) {
    uVar6 = param_3 & 0xffff;
    uVar2 = uVar4 - uVar6 & 0xffff;
    uStack_60 = 0x20001;
    uStack_68 = 1;
    uVar3 = uVar2;
    if (param_3 < uVar2) {
      uVar2 = param_3;
      uVar3 = uVar6;
    }
    iVar8 = *param_1;
    iVar7 = param_3 * 4;
    uStack_5c = 0;
    sStack_66 = (short)uVar3;
    sVar1 = sStack_66 + 2;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    puStack_6c = &uStack_5c;
    uStack_64 = param_2;
    FUN_ram_4ff45158(&uStack_5c,(void *)(iVar8 + iVar7),uVar2 << 2);
    sStack_66 = sVar1;
    if (param_3 < uVar4) {
      memset((void *)(iVar8 + iVar7),0,(uVar4 - param_3) * 4);
    }
    iVar8 = FUN_ram_4817bf84(&puStack_6c,&puStack_6c,&uStack_64);
    if ((iVar8 == 0) && (iVar8 = FUN_ram_48180316(param_1,param_1,&puStack_6c), iVar8 == 0)) {
      uVar2 = (uint)*(ushort *)((int)param_1 + 6);
      uVar4 = uVar2 - uVar6 & 0xffff;
      iVar8 = iVar7;
      if (uVar4 <= param_3) {
        iVar8 = uVar4 << 2;
        uVar6 = uVar4;
      }
      iVar5 = *param_1;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      sStack_66 = (short)uVar6;
      FUN_ram_4ff45158(&uStack_5c,(void *)(iVar5 + iVar7),iVar8);
      sStack_66 = (short)uVar6 + uStack_60._2_2_;
      if (param_3 < uVar2) {
        memset((void *)(iVar5 + iVar7),0,(uVar2 - param_3) * 4);
      }
      iVar8 = FUN_ram_4817bf84(&puStack_6c,&puStack_6c,&uStack_64);
      if (iVar8 == 0) {
        iVar8 = FUN_ram_48180316(param_1,param_1,&puStack_6c);
      }
    }
    return iVar8;
  }
  return 0;
}


