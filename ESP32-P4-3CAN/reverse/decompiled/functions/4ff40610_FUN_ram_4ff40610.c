/* Firmware entry: 0x4ff40610 */

void FUN_ram_4ff40610(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(*(int *)(DAT_ram_4ff6e164 + 0xc) + 0xc);
  iVar3 = iVar1 + 4;
  FUN_ram_4ff3fb48(iVar3);
  if ((*(byte *)(iVar1 + 0x28) & 4) != 0) {
    do {
      *(int *)(iVar1 + 0x10) = iVar1;
      uVar2 = param_1 + *(uint *)(iVar1 + 0x18);
      *(uint *)(iVar1 + 4) = uVar2;
      if (param_2 < uVar2) {
        if ((param_1 <= param_2) || (uVar2 < param_1)) goto LAB_ram_4ff4068a;
      }
      else if (param_2 - param_1 < *(uint *)(iVar1 + 0x18)) {
        FUN_ram_4ff3fb10(DAT_ram_4ff6e160,iVar3);
        goto LAB_ram_4ff40648;
      }
      (**(code **)(iVar1 + 0x20))(iVar1);
      param_1 = uVar2;
    } while( true );
  }
  *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) & 0xfe;
LAB_ram_4ff40648:
                    /* WARNING: Could not recover jumptable at 0x4ff4065a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x20))(iVar1);
  return;
LAB_ram_4ff4068a:
  FUN_ram_4ff3fb10(DAT_ram_4ff6e164,iVar3);
  goto LAB_ram_4ff40648;
}


