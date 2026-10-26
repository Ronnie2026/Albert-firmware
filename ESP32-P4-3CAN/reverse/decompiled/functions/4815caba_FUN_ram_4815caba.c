/* Firmware entry: 0x4815caba */

int FUN_ram_4815caba(int param_1,undefined4 param_2,int param_3,byte *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  byte abStack_21 [5];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar9 = 0;
  for (iVar1 = *(int *)(param_1 + 0x38); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = FUN_ram_4ff45520(param_2,iVar1 + 8,0xf);
    if (iVar2 == 0) {
      *param_4 = *(byte *)(iVar1 + 0x18);
      return 0;
    }
  }
  iVar1 = 0x1102;
  if (param_3 != 0) {
    uVar7 = 1;
    abStack_21[0] = 1;
    uVar4 = 0;
    do {
      uVar6 = uVar7 & 0xff;
      uVar5 = *(uint *)((uVar7 >> 5) * 4 + param_1 + 0x44) >> (uVar7 & 0x1f) & 1;
      uVar7 = uVar7 + 1;
      if (uVar5 == 0) {
        if (uVar4 != 0) {
          abStack_21[0] = (byte)uVar9;
        }
        iVar1 = FUN_ram_4815c814(param_1,0,1,param_2,abStack_21);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (uint)(abStack_21[0] >> 5) * 4 + param_1;
        *(uint *)(iVar1 + 0x44) = *(uint *)(iVar1 + 0x44) | 1 << (abStack_21[0] & 0x1f);
        *param_4 = abStack_21[0];
        puVar3 = (undefined4 *)FUN_ram_4ff20824(0x1c,2,0x1400,0x1800);
        if (puVar3 == (undefined4 *)0x0) {
          return 0x101;
        }
        *puVar3 = 0;
        puVar3[1] = 0;
        *(byte *)(puVar3 + 6) = abStack_21[0];
        FUN_ram_4ff45594(puVar3 + 2,param_2,0xf);
        *(undefined1 *)((int)puVar3 + 0x17) = 0;
        uVar8 = 0;
        if (*(int *)(param_1 + 0x3c) != 0) {
          *(undefined4 **)(*(int *)(param_1 + 0x3c) + 4) = puVar3;
          uVar8 = *(undefined4 *)(param_1 + 0x3c);
        }
        *puVar3 = uVar8;
        puVar3[1] = 0;
        *(undefined4 **)(param_1 + 0x3c) = puVar3;
        if (*(int *)(param_1 + 0x38) == 0) {
          *(undefined4 **)(param_1 + 0x38) = puVar3;
        }
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        return 0;
      }
      uVar9 = uVar6 + 1 & 0xff;
      uVar4 = uVar5;
    } while (uVar7 != 0xff);
    iVar1 = 0x1105;
  }
  return iVar1;
}


