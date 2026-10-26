/* Firmware entry: 0x48182af0 */

int FUN_ram_48182af0(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 uStack_34;
  byte local_30 [24];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar4 = *(uint *)(param_1 + 0x7c);
  if ((uVar4 & 0x10) == 0) {
    if ((uVar4 & 3) == 3) {
      if ((((*(int *)(param_1 + 0x24) == 0) || ((uVar4 & 8) != 0)) &&
          ((*(int *)(param_1 + 0x20) == 0 || (*(int *)(param_1 + 0x20) == *(int *)(param_1 + 0x2c)))
          )) && (*(int *)(param_1 + 0x28) == param_3)) {
        uVar4 = *(uint *)(param_1 + 0x30);
        if (uVar4 != 0) {
          uVar5 = 0;
          do {
            param_1[0x1f - uVar5] = 0;
            uVar5 = uVar5 + 1 & 0xff;
          } while (uVar5 < uVar4);
        }
        local_30[0] = 0;
        local_30[1] = 0;
        local_30[2] = 0;
        local_30[3] = 0;
        local_30[4] = 0;
        local_30[5] = 0;
        local_30[6] = 0;
        local_30[7] = 0;
        local_30[8] = 0;
        local_30[9] = 0;
        local_30[10] = 0;
        local_30[0xb] = 0;
        local_30[0xc] = 0;
        local_30[0xd] = 0;
        local_30[0xe] = 0;
        local_30[0xf] = 0;
        uStack_34 = 0;
        iVar2 = FUN_ram_48171b10(param_1 + 0x38,param_1 + 0x10,0x10,local_30,&uStack_34);
        pbVar6 = local_30;
        pbVar3 = param_1;
        if (iVar2 != 0) {
          *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x10;
          FUN_ram_48178af2(local_30);
          return iVar2;
        }
        do {
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          *pbVar3 = *pbVar3 ^ bVar1;
          pbVar3 = pbVar3 + 1;
        } while (pbVar6 != local_30 + 0x10);
        FUN_ram_48178af2(local_30,0x10);
        if (param_2 != 0) {
          FUN_ram_4ff45158(param_2,param_1,param_3);
        }
        param_1[0x7c] = 0;
        param_1[0x7d] = 0;
        param_1[0x7e] = 0;
        param_1[0x7f] = 0;
        memset(param_1,0,0x10);
        memset(param_1 + 0x10,0,0x10);
        iVar2 = 0;
      }
      else {
        iVar2 = -0xd;
      }
    }
    else {
      iVar2 = -0xd;
    }
  }
  else {
    iVar2 = -0x6e;
  }
  return iVar2;
}


