/* Firmware entry: 0x48185ce2 */

int FUN_ram_48185ce2(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                    undefined1 *param_5,uint param_6,undefined4 param_7,uint param_8,
                    undefined4 param_9,uint param_10,int *param_11)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  int iStack_17c;
  int iStack_178;
  undefined1 auStack_174 [16];
  undefined1 auStack_164 [32];
  undefined1 uStack_144;
  undefined1 auStack_143 [271];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_188 = 0;
  if ((param_5 == (undefined1 *)0x0) && (param_6 != 0)) {
    return -0x1f80;
  }
  iVar2 = FUN_ram_4817189a(param_3);
  if (iVar2 == 0) {
    return -0x1f00;
  }
  uVar6 = *(uint *)(iVar2 + 4);
  uVar8 = uVar6 >> 8 & 0xf;
  uVar7 = param_8;
  if (param_2 == 0) {
joined_r0x48185e9e:
    if (param_10 < uVar7) {
      return -0x6c;
    }
  }
  else if (param_2 == 1) {
    uVar7 = ((uVar6 & 0x1f) + param_8) - param_8 % (uVar6 & 0x1f);
    goto joined_r0x48185e9e;
  }
  uStack_184 = 0;
  uVar7 = uVar6 >> 5 & 7;
  if (0x80 < param_6) {
    return -0x1f80;
  }
  uStack_180 = 0;
  iStack_17c = 0;
  iStack_178 = 0;
  memset(&uStack_144,0,0x102);
  iVar9 = param_1[2] + param_1[1];
  if (*param_1 != 0x30) {
    return -0x1ee2;
  }
  iVar3 = FUN_ram_4817f40e(param_1 + 2,iVar9,&iStack_17c,4);
  if (iVar3 == 0) {
    iStack_178 = param_1[2];
    param_1[2] = iStack_178 + iStack_17c;
    iVar3 = FUN_ram_4817f55c(param_1 + 2,iVar9,&uStack_184);
    if (iVar3 == 0) {
      if (iVar9 != param_1[2]) {
        return -0x1ee6;
      }
      goto LAB_ram_48185dc0;
    }
  }
  if (iVar3 + -0x1e80 != 0) {
    return iVar3 + -0x1e80;
  }
LAB_ram_48185dc0:
  puVar5 = param_5 + param_6;
  puVar4 = auStack_143;
  if (param_6 != 0) {
    do {
      uVar1 = *param_5;
      param_5 = param_5 + 1;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 2;
    } while (puVar5 != param_5);
  }
  iVar3 = (param_6 + 1) * 2;
  iVar9 = FUN_ram_48185930(auStack_164,uVar8 << 3,&uStack_144,iVar3,iStack_178,iStack_17c,param_4,1,
                           uStack_184);
  if (iVar9 == 0) {
    iVar9 = uVar7 << 2;
    if ((uVar7 != 0) &&
       (iVar3 = FUN_ram_48185930(auStack_174,iVar9,&uStack_144,iVar3,iStack_178,iStack_17c,param_4,2
                                 ,uStack_184), iVar3 != 0)) {
      return iVar3;
    }
    FUN_ram_4817190e(&uStack_144);
    iVar2 = FUN_ram_48171962(&uStack_144,iVar2);
    if (((iVar2 == 0) &&
        (iVar2 = FUN_ram_481719ba(&uStack_144,auStack_164,uVar8 << 6,param_2), iVar2 == 0)) &&
       (iVar2 = FUN_ram_48171fce(&uStack_144,0), iVar2 == 0)) {
      iVar2 = FUN_ram_48172078(&uStack_144,auStack_174,iVar9,param_7,param_8,param_9,&iStack_188);
      if (iVar2 == -0x6200) {
        iVar2 = -0x1e00;
      }
      *param_11 = *param_11 + iStack_188;
    }
    FUN_ram_48178af2(auStack_164,0x20);
    FUN_ram_48178af2(auStack_174,0x10);
    FUN_ram_4817191c(&uStack_144);
    return iVar2;
  }
  return iVar9;
}


